#include<string>
#include<iostream>
#include"delete.h"


class User
{
 
	int id;
	std::string name;
public:
	User(int userId, std::string userName) : id(userId), name(userName)
	{}

    User(double userId, std::string userName) = delete ;
    User(char userId, std::string userName) = delete ;

    //void * operator new (size_t) = delete;
 
	// Copy Constructor is deleted
	User(const User & obj) = delete;
	// Assignment operator is deleted
	User & operator = (const User & obj) = delete;
 
	void display()
	{
		std::cout<<id << " ::: "<<name<<std::endl;
	}
 
};



int main()
{
    User userObj(3, "John");
    //User *ptr = new User(1, "Rziti");
    //User userObj1(5.5, "John");
    //User userObj2('a', "John");
 
    //User obj = userObj;

    ComplexNumber<int> obj1(1, 2);
    //ComplexNumber<double> obj2(1.1, 2.1);
    //ComplexNumber<char> obj3('1' , '2');

	return 0;
}