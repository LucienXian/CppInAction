#include <thread>
#include <iostream>
#include <mutex>

class Application
{
private:
    std::mutex mutex;
    bool m_bDataLoaded;
public:
    void loadData() {
        // pretend to load data
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        std::cout<<"Loading Data from XML"<<std::endl;

        std::lock_guard<std::mutex> lock_mut(mutex);
        m_bDataLoaded = true;
    }

    void mainTask() {
        std::cout<<"Do Some Handshaking"<<std::endl;

        mutex.lock();
        while (!m_bDataLoaded) {
            mutex.unlock();

            // pretend to main task
            std::this_thread::sleep_for(std::chrono::milliseconds(100));
            // Acquire the lock
            mutex.lock();
        }

        mutex.unlock();
        std::cout<<"Do Processing On loaded Data"<<std::endl;
    }
};

int main()
{
    Application app;
    
    std::thread thread_1(&Application::mainTask, &app);
    std::thread thread_2(&Application::loadData, &app);
    
    thread_2.join();
    thread_1.join();
    return 0;
}