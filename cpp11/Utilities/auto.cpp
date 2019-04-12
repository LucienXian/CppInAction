#include<string>
#include<map>
#include<iostream>

int sum(int a, int b)
{
    return a+b;
}

auto sum1(int x, int y) -> int
{
	return x + y;
}

int main()
{
    // type int
    auto var_1 = 5;
 
    // type char
    auto var_2 = 'C';
    
    std::cout<<var_1<<std::endl;
    std::cout<<var_2<<std::endl;

    auto func_sum = [](int a, int b) {
        return a+b;
    };

    std::cout<<func_sum(4, 5)<<std::endl;

    std::map<std::string, std::string> mapOfStrs;
 
    // Insert data in Map
    mapOfStrs.insert(std::pair<std::string, std::string>("first", "1") );
    mapOfStrs.insert(std::pair<std::string, std::string>("sec", "2") );
    mapOfStrs.insert(std::pair<std::string, std::string>("thirs", "3") );

    //std::map<std::string, std::string>::iterator it = mapOfStrs.begin();
    auto it = mapOfStrs.begin();
    while (it != mapOfStrs.end()) {
        std::cout<<it->first<<"::"<<it->second<<std::endl;
        it++;
    }

    auto value = sum1(3, 5);
    //auto value = sum(3, 5); it's OK
    std::cout<<value<<std::endl;

    return 0;
}