#include <iostream>
#include <memory>

struct Sample
{
    Sample()
    {
        std::cout << "CONSTRUCTOR\n";
    }
    ~Sample()
	{
		std::cout << "DESTRUCTOR\n";
	}
};

void deleter(Sample *x)
{
    std::cout << "DELETER FUNCTION CALLED\n";
	delete[] x;
}

struct Sample2
{
    void dummyFunction(){
        std::cout << "dummyFunction" << std::endl;
    }
};

typedef struct Sample3 {
Sample3() {
    // int internalValue = 0;
    std::cout<<"Constructor"<<std::endl;
}
~Sample3() {
    std::cout<<"Destructor"<<std::endl;
}
}Sample3;

int main()
{
    /*
     * Part 1: what is shared_ptr
     * 
    std::shared_ptr<int> p1 = std::make_shared<int>();
    *p1 = 78;
    std::cout << "p1 Reference count = " << p1.use_count() << std::endl;

    // update refernece count
    std::shared_ptr<int> p2(p1);
    std::cout << "p2 Reference count = " << p2.use_count() << std::endl;
	std::cout << "p1 Reference count = " << p1.use_count() << std::endl;
    // Comparing operator
    if (p1 == p2) 
        std::cout << "p1 and p2 are pointing to same pointer\n";
    // reset P1
    std::cout<<"Reset p1 "<<std::endl;

	// p1.reset();
    p1.reset(new int(11));
	std::cout << "p1 Reference Count = " << p1.use_count() << std::endl;

    p1 = nullptr;
    std::cout << "p1  Reference Count = " << p1.use_count() << std::endl;
 
	if (!p1)
		std::cout << "p1 is NULL" << std::endl;
    */

    /*
     * Part 2: deleter
     * 
    std::shared_ptr<Sample> p3(new Sample[12], deleter);
    */

    /*
     * Part 3: VS raw pointer
     * 
    std::shared_ptr<Sample2> ptr = std::make_shared<Sample2>();
    (*ptr).dummyFunction();
    ptr->dummyFunction();

    // ptr++;
    // ptr[0]; Wrong
    std::shared_ptr<Sample2> ptr2(ptr);
 
	if (ptr == ptr2) // Will work
		std::cout << "ptr and ptr2 are equal" << std::endl;
    */

    /*
     * Part 4: Create shared_ptr objects carefully
     * */
    {
        Sample3 *rawPtr = new Sample3();
        std::shared_ptr<Sample3> ptr1(rawPtr); 
        {
            // rawPtr has been freed
            // std::shared_ptr<Sample3> ptr2(rawPtr);
        }
        // can not aloocate memory from stack
        int x = 12;
        // std::shared_ptr<int> ptr(&x);
    }

    return 0;
}