#include <iostream>
#include <tuple>
#include <string>

std::tuple<int, double, std::string> someFunction()
{
	// Creating a tuple of int, double and string
	std::tuple<int, double, std::string> result(7, 9.8, "text");
 
	// Returning tuple object
	return result;
}

int main()
{
    std::tuple<int, double, std::string> result = someFunction();

    auto result2 = std::make_tuple(7, 9.8, "text");
    std::tuple<int, double, std::string> result3{7, 9.8, "text"};

    int val1 = std::get<0>(result);
    double dVal = std::get < 1 > (result);
	std::string strVal = std::get < 2 > (result);

    std::cout << "int value = " << val1 << std::endl;
	std::cout << "double value = " << dVal << std::endl;
	std::cout << "string value = " << strVal << std::endl;

    int x = 1;
    // double dVal2 = std::get<x>(result);

    const int i = 1;
    double dVal3 = std::get < i > (result);

    return 0;
}