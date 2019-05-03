#include <iostream>

class Person {
		int mAge;
public:
    Person() {
      	mAge = 10;
    }
    void incrementAge()
    {
      	mAge = mAge + 1;
    }
};

	
Person getPerson()
{
	return Person();
}

int main()
{   
    getPerson().incrementAge();

    return 0;
}
