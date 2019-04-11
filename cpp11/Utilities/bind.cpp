#include <memory>
#include <functional>
#include <iostream>
#include <algorithm>

using namespace std::placeholders;

int add(int first, int second)
{
	return first + second;
}
 
bool divisible(int num , int den)
{
	if(num % den == 0)
		return true;
	return false;
 
}
int approach_1()
{
	int arr[10] = {1,20,13,4,5,6,10,28,19,15};
	int count = 0;
	for(int i = 0; i < sizeof(arr)/sizeof(int); i++)
	{
		if(divisible(arr[i], 5))
			count++;
	}
	return count;
 
}
 
int approach_2()
{
	int arr[10] = {1,20,13,4,5,6,10,28,19,15};
	return std::count_if(arr, arr + sizeof(arr)/sizeof(int) , std::bind(&divisible, _1, 5));
 
}

void display(int x) 
{
    std::cout << x << std::endl;
}

int main() 
{
    int x0 = add(4, 5);

    auto new_add_func = std::bind(&add, 12, _1);

    int x1 = new_add_func(5);

    std::cout << x0 << " " << x1 << " " << std::endl;

    auto mod_add_func = std::bind(&add, _2, _1);

    int x = mod_add_func(12, 15);

    display(x);

    std::function<int (int) > mod_add_funcObj = std::bind(&add, 20, _1);

    x = mod_add_funcObj(15);

    display(x);

    display(approach_1());

    display(approach_2());

    return 0;
}