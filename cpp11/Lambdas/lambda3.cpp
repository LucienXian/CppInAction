#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class OddCounter
{
private:
    int mCounter = 0;
public:
    int getCounter() {
        return mCounter;
    }

    void update(std::vector<int> &vec) {
        std::for_each(vec.begin(), vec.end(), [this](int element){
            if (element % 2) mCounter++;
        });
    }
};


int main(int argc, char **argv)
{
	std::vector<int> vec = {12,3,2,1,8,9,0,2,3,9,7};
 
	OddCounter counterObj;
 
	//Passing the vector to OddCounter object
	counterObj.update(vec);
 
	int count = counterObj.getCounter();
 
	std::cout<<"Counter = "<<count<<std::endl;
	return 0;
}