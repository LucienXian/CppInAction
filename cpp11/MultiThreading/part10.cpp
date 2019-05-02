#include <iostream>
#include <thread>
#include <future>
#include <string>
 
// Fetch some data from DB
std::string getDataFromDB( std::string token)
{
	// Do some stuff to fetch the data
	std::string data = "Data fetched from DB by Filter :: " + token;
	return data;
}

struct DBDataFetcher
{
	std::string operator()(std::string token)
	{
		// Do some stuff to fetch the data
					std::string data = "Data From " + token;
					return data;
	}
};

int main()
{
    //std::packaged_task<std::string (std::string)> task(getDataFromDB);
    /*
    std::packaged_task<std::string (std::string)> task([](std::string token) {
        std::string data = "Data fetched from DB by Filter :: " + token;
	    return data;
    });
    */
    std::packaged_task<std::string (std::string)> task(std::move(DBDataFetcher()));

    std::future<std::string> result = task.get_future();

    std::thread th(std::move(task), "Arg");
    th.join();

    std::string data =  result.get();
 
	std::cout <<  data << std::endl;
 
	return 0; 
}