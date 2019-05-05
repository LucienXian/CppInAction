#include <iostream>
#include <vector>
#include <map>
#include <list>
#include <vector>
#include <initializer_list>

class Point {
	int mX;
	int mY;
	int mZ;
public:
	// Constructor with 3 ints as argument
	Point(int a, int b, int c) :
			mX(a), mY(b), mZ(c) {
		std::cout << "Point:: Parameterized Constructor\n";
	}
	// Constructor with initializer_list as an argument
	Point(std::initializer_list<int> list)
	{
		if(list.size() == 3)
		{
			std::initializer_list<int>::iterator it = list.begin();
			mX = *it++;
			mY = *it++;
			mZ = *it;
		}
		std::cout << "Point:: Initializer_list<int>Constructor\n";
	}
 
	void display() {
		std::cout << "(" << mX << "," << mY << "," << mZ << ")\n";
	}
};

int main() {
    
    // part 1
    // clang++ -Wall -g -std=c++11  initialzer_list.cpp -o initialzer_list -Wno-narrowing
    // Refer: https://gcc.gnu.org/onlinedocs/gcc/C_002b_002b-Dialect-Options.html (search for -Wnarrowing)
    /*
	int arr[] { 1, 2, 3, 4.5, 5 };
 
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
		std::cout << i << " , ";
	std::cout << std::endl;
 
	std::vector<int> vec = { 1, 2, 3, 4.5, 5 };
 
	for (int i : vec)
		std::cout << i << " , ";
	std::cout << std::endl;
 
	return 0;
    */


    // part 2
    /*
    Point pointobj1( { 1, 2, 3 }); // print Point:: Initializer_list<int>Constructor
 
	Point pointobj2(4,5,6); // print Point:: Parameterized Constructor
 
	pointobj1.display();
	pointobj2.display();
 
	return 0;
    */

    // part 3
    std::map<std::string, int> mapOfMarks = { { "Riti", 2 }, { "Jack", 4 } };

    for (auto entry : mapOfMarks)
		std::cout << entry.first << " :: " << entry.second << std::endl;
    return 0;
}