#include <iostream>
#include <string>

namespace variadic_templates{
    template <class... Ts> struct tuple {};

    template <class T, class... Ts>
    struct tuple<T, Ts...> : tuple<Ts...>
    {
        tuple(T t, Ts... ts) : tuple<Ts...>(ts...), tail(t){
            std::cout << __PRETTY_FUNCTION__ << std::endl;
        }

        T tail;
    };

    template <size_t, class> struct elem_type_holder;

    template <class T, class... Ts>
    struct elem_type_holder<0, tuple<T, Ts...>>
    {
        typedef T type;
    };

    template <size_t k, class T, class... Ts>
    struct elem_type_holder<k, tuple<T, Ts...>> {
        typedef typename elem_type_holder<k - 1, tuple<Ts...>>::type type;
    };

    template <size_t k, class... Ts>
    typename std::enable_if<k==0, typename elem_type_holder<0, tuple<Ts...>>::type&>::type
    get(tuple<Ts...>& t){
        return t.tail;
    }

    template <size_t k, class T, class... Ts>
    typename std::enable_if<k!=0, typename elem_type_holder<k, tuple<T, Ts...>>::type&>::type
    get(tuple<T, Ts...>& t){
        tuple<Ts...>& base = t;
        return get<k-1>(base);
    }
}


int main(int argc, char const *argv[])
{
    /*
     * tuple<const char *>::tuple(T, Ts...) [Ts = <const char *>]
     * tuple<unsigned long long, const char *>::tuple(T, Ts...) [Ts = <unsigned long long, const char *>] 
     * tuple<double, unsigned long long, const char *>::tuple(T, Ts...) [Ts = <double, unsigned long long, const char *>]
     */
    variadic_templates::tuple<double, uint64_t, const char*> t1(12.2, 42, "big");
    std::cout << "0th elem is " << variadic_templates::get<0>(t1) << std::endl;
    std::cout << "1th elem is " << variadic_templates::get<1>(t1) << std::endl;
    std::cout << "2th elem is " << variadic_templates::get<2>(t1) << std::endl;

    variadic_templates::get<1>(t1) = 103;
    std::cout << "Assigned, 1th elem is " << variadic_templates::get<1>(t1) << std::endl;

    return 0;
}
