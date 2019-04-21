#include <thread>
#include <iostream>
#include <vector>

class Wallet
{
private:
    int mMoney;
public:
    Wallet():mMoney(0){}
    //~Wallet();
    void addMoney(int money)
    {
       for(int i = 0; i < money; ++i)
       {
          mMoney++;
       }
    }
    int getMoney()
    {
        return this->mMoney;
    }
};

int testMultithreadWallet()
{
    Wallet walletObj;
    std::vector<std::thread> threads;
    for (int i = 0; i < 5; i++)
        threads.push_back(std::thread(&Wallet::addMoney, &walletObj, 1000));
    for(int i = 0; i < threads.size() ; i++)
   {
       threads.at(i).join();
   }
   return walletObj.getMoney();
}

int main()
{
 
  int val = 0;
  for(int k = 0; k < 1000; k++)
  {
     if((val = testMultithreadWallet()) != 5000)
     {
       std::cout << "Error at count = "<<k<<" Money in Wallet = "<<val << std::endl;
     }
  }
  return 0;
}
