#include <iostream>
#include <thread>

void thread_function() {
    for (int i = 0; i < 10; i++)
        std::cout<<"thread function Executing"<<std::endl;
}

class DisplayThread
{
public:
    void operator()()
    {
        for(int i = 0; i < 10; i++)
            std::cout<<"Display Thread Executing"<<std::endl;
    }
};

void thread_func_id() {
    std::cout<<"Inside Thread :: ID  = "<<std::this_thread::get_id()<<std::endl;
}

int main()
{
    //std::thread threadObj(thread_function);
    //std::thread threadObj( (DisplayThread()) );
    /*
    std::thread threadObj([]{
            for(int i = 0; i < 10; i++)
                std::cout<<"Display Thread Executing"<<std::endl;
            });
    */
    std::thread threadObj1(thread_func_id);
    std::thread threadObj2(thread_func_id);
    /*
    for (int i = 0; i < 10; i++)
        std::cout<<"Display From MainThread"<<std::endl;*/
    if (threadObj1.get_id()!=threadObj2.get_id())
        std::cout<<"Both Threads have different IDs"<<std::endl;
    
    std::cout<<"From Main Thread :: ID of Thread 1 = "<<threadObj1.get_id()<<std::endl;
    std::cout<<"From Main Thread :: ID of Thread 2 = "<<threadObj2.get_id()<<std::endl;
    //std::cout<<"Waiting For Thread to complete"<<std::endl;
    //threadObj.join();
    //std::cout<<"Exit of Main function"<<std::endl;
    threadObj1.join();
    threadObj2.join();
    return 0;
}