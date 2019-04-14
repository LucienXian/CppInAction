#include<iostream>

void log() {}

template<typename T, typename ... Args>
void log(T first, Args ... args)
{
    std::cout << first << " , ";
    log(args ...);
}

int main()
{
    log(2, 3.4, "aaa");
    return 0;
}