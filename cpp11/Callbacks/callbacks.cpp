#include <string>
#include <iostream>

std::string encrypterFunPtr(std::string data) {
    for (int i = 0; i < data.size(); i++)
        if ((data[i] >= 'a' && data[i] <= 'z')
                || (data[i] >= 'A' && data[i] <= 'Z'))
            data[i]++;
    return data;
}

class Encryptor {
    bool m_isIncremental;
    int m_count;
public:
    Encryptor() {
        m_isIncremental = 0;
        m_count = 1;
    }
    Encryptor(bool isInc, int count) {
        m_isIncremental = isInc;
        m_count = count;
    }
    std::string operator()(std::string data) {
        for (int i = 0; i < data.size(); i++)
            if ((data[i] >= 'a' && data[i] <= 'z')
                    || (data[i] >= 'A' && data[i] <= 'Z')) {
                if (m_isIncremental)
                    data[i] = data[i] + m_count;
                else
                    data[i] = data[i] - m_count;
            }
        return data;
    }
 
};

std::string buildCompleteMessage(std::string rawData, 
        std::string (*encrypterFunPtr)(std::string)) {
    rawData = "[HEADER]" + rawData + "[FooTER]";

    return encrypterFunPtr(rawData);
}

std::string buildCompleteMessage(std::string rawData, 
        Encryptor encryptorFuncObj) {
    rawData = "[HEADER]" + rawData + "[FooTER]";

    return encryptorFuncObj(rawData);
}


int main(int argc, char const *argv[])
{
    std::string msg = buildCompleteMessage("SampleString",
            &encrypterFunPtr);
    std::cout << msg << std::endl;

    std::cout << ".........................................." << std::endl;

    msg = buildCompleteMessage("SampleString", Encryptor(true, 1));
    std::cout << msg << std::endl;
 
    msg = buildCompleteMessage("SampleString", Encryptor(false, 3));
    std::cout << msg << std::endl;
 
    msg = buildCompleteMessage("SampleString", Encryptor(false, 1));
    std::cout << msg << std::endl;
    return 0;
}
