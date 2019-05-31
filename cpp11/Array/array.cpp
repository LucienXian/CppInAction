#include <iostream>
#include <array>

void printArray(std::array<int, 10>& arr)
{
    for (auto &ele : arr)
        std::cout << ele << ", ";
    std::cout << std::endl;
}

int main()
{
    std::array<int, 10> arr1 = {32, 10};
    printArray(arr1);

    std::array<int, 10> arr2 = {1,2,3,4,5,6,7,8,9,10};
    printArray(arr2);

    std::cout << arr2.at(2) << std::endl;

    int x;

    try
    {
        x = arr2.at(12);
    }
    catch(const std::out_of_range& e)
    {
        std::cerr << e.what() << '\n';
    }

    // std::cout << std::get<12>(arr2) << std::endl; Compiler Error

    std::for_each(arr2.begin(), arr2.end(), [](const int & ele){
        std::cout << ele << ", ";
    });
    std::cout << std::endl;

    return 0;
}