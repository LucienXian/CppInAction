#include <iostream>
#include <map>
#include <unordered_map>
#include <string>
#include <algorithm>

int main()
{
    std::map<std::string, int> wordMap = {
						{ "is", 6 },
						{ "the", 5 },
						{ "hat", 9 },
						{ "at", 6 }
					};
 
	std::cout<<"std::map Contents : Elements are in sorted order of Keys"<<std::endl;
    std::for_each(wordMap.begin(), wordMap.end(), [](std::pair<std::string, int>  elem){
		std::cout<<elem.first<< " :: "<< elem.second<<std::endl;
	});

    std::unordered_map<std::string, int> wordUOMap = {
						{ "is", 6 },
						{ "the", 5 },
						{ "hat", 9 },
						{ "at", 6 }
					};
 
	std::cout<<"std::unordered_map Contents : Elements are in Random order of Keys"<<std::endl;
    std::for_each(wordUOMap.begin(), wordUOMap.end(), [](std::pair<std::string, int>  elem){
		std::cout<<elem.first<< " :: "<< elem.second<<std::endl;
	});


    if (wordUOMap.erase("is") == 1) {
        std::cout<<"std::unordered_map delete key 'is' "<<std::endl;
        std::for_each(wordUOMap.begin(), wordUOMap.end(), [](std::pair<std::string, int>  elem){
            std::cout<<elem.first<< " :: "<< elem.second<<std::endl;
        });
    }

}