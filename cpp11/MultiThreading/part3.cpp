#include <iostream>
#include <string>
#include <thread>

void threadCallback(int x, std::string str)
{
    std::cout<<"Passed Number = "<<x<<std::endl;
    std::cout<<"Passed String = "<<str<<std::endl;
}

void newThreadCallback(int *p)
{
    std::cout<<"Inside Thread 1 : p = "<<p<<std::endl;
    std::chrono::milliseconds dura(1500);
    std::this_thread::sleep_for(dura);
    *p = 19;
    std::cout<<"Inside Thread 2 : *p = "<<*p<<std::endl;
}

void startNewThread1()
{
    int i = 10;
    std::cout<<"Inside Main Thread: i = "<<i<<std::endl;
    std::thread t(newThreadCallback,&i);
    t.detach();
    std::cout<<"Inside Main Thread:  i = "<<i<<std::endl;
    std::cout<<"Inside Main Thread address: i = "<<&i<<std::endl;
}

void startNewThread2()
{
    int *p = new int(10);
    std::cout<<"Inside Main Thread : *p = "<<*p<<std::endl;
    std::cout<<"Inside Main Thread : p = "<<p<<std::endl;
    std::thread t(newThreadCallback, p);
    t.detach();
    delete p;
    p = NULL;
    //std::cout<<"Inside Main Thread : *p = "<<*p<<std::endl;
}

void threadCallbackRef(int const & x)
{
    int & y = const_cast<int &>(x);
    y++;
    std::cout<<"Inside Thread x = "<<x<<std::endl;
}

int main()
{
    /*
     * simple arguments 
     */
    /*
    int x = 10;
    std::string str = "Sample String";
    std::thread threadObj(threadCallback, x, str);
    threadObj.join();
    return 0;
    */

    /*
     * pass pointer
     */
    /*
    startNewThread2();
    std::chrono::milliseconds dura(2000);
    std::this_thread::sleep_for(dura);
    return 0;
    */

    /*
     * pass reference
     */
    int x = 9;
    std::cout<<"In Main Thread : Before Thread Start x = "<<x<<std::endl;
    //std::thread threadObj(threadCallbackRef, x);
    std::thread threadObj(threadCallbackRef,std::ref(x));
    threadObj.join();
    std::cout<<"In Main Thread : After Thread Joins x = "<<x<<std::endl;
    return 0;
}