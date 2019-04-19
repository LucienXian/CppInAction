#include <iostream>
#include <thread>
#include <algorithm>
#include <vector>

class WorkerThread
{
public:
    void operator()()     
    {
        std::cout<<"Worker Thread "<<std::this_thread::get_id()<<" is Executing"<<std::endl;
    } 
};

class ThreadRAII
{
    std::thread & m_thread;
    public:
        ThreadRAII(std::thread  & threadObj) : m_thread(threadObj)
        {
            
        }
        ~ThreadRAII()
        {
            // Check if thread is joinable then detach the thread
            if(m_thread.joinable())
            {
                m_thread.detach();
            }
        }
};

void thread_function()
{
    for(int i = 0; i < 10; i++)
        std::cout<<"thread_function Executing"<<std::endl;
}

int main()
{
    /* part2_1 join() 
     
    std::vector<std::thread> threadList;
    for(int i = 0; i < 10; i++)
    {
        threadList.push_back( std::thread( WorkerThread() ) );
    }
    
    std::cout<<"wait for all the worker thread to finish"<<std::endl;
    std::for_each(threadList.begin(),threadList.end(), std::mem_fn(&std::thread::join));
    std::cout<<"Exiting from Main Thread"<<std::endl;
    return 0;
    */
   
    /* part2_2
     * RAII
     */
    std::thread thObj(thread_function);

    // If we comment this Line, then program will crash
    ThreadRAII wrapperObj(thObj);

    return 0;
}