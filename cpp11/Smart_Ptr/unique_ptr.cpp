#include <iostream>
#include <memory>

struct Task
{
	int mId;
	Task(int id ) :mId(id)
	{
		std::cout<<"Task::Constructor"<<std::endl;
	}
	~Task()
	{
		std::cout<<"Task::Destructor"<<std::endl;
	}
};

int main()
{
    std::unique_ptr<int> ptr1;
    if(!ptr1)
		std::cout<<"ptr1 is empty"<<std::endl;

	if(ptr1 == nullptr)
		std::cout<<"ptr1 is empty"<<std::endl;

    std::unique_ptr<Task> taskPtr2(new Task(55));
    {
        std::unique_ptr<Task> taskPtr4 = std::move(taskPtr2);
        if(taskPtr2 == nullptr)
			std::cout<<"taskPtr2 is empty"<<std::endl;
 
		if(taskPtr4 != nullptr)
			std::cout<<"taskPtr4 is not empty"<<std::endl;
 
		std::cout<<taskPtr4->mId<<std::endl;
    }

    return 0;
}