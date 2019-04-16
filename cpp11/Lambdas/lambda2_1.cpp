#include <iostream>
#include <string>

int main()
{
    std::string msg = "Hello";
    int counter = 5;

    auto func = [msg, counter] () mutable {
        std::cout<<"Inside Lambda :: msg = "<<msg<<std::endl;
		std::cout<<"Inside Lambda :: counter = "<<counter<<std::endl;

        msg = "World";
        counter = 10;

        std::cout<<"Inside Lambda :: msg = "<<msg<<std::endl;
		std::cout<<"Inside Lambda :: counter = "<<counter<<std::endl;
    };

    func();

    // Not change
    std::cout<<"msg = "<<msg<<std::endl;
	std::cout<<"counter = "<<counter<<std::endl;

    return 0;
}