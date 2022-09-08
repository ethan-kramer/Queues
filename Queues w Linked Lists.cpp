#include <iostream>
#include <fstream>
#include <string>
#include "DynamicQueue.h"

int main()
{

    const int N = 4;
    DynamicQueue queue0 = DynamicQueue();
    DynamicQueue queue1 = DynamicQueue();
    DynamicQueue queue2 = DynamicQueue();
    DynamicQueue queue3 = DynamicQueue();

    DynamicQueue queueList[N] = { queue0 , queue1 , queue2 , queue3 };

    std::string key;
    std::ifstream myfile("data.txt");//2 is index 0 is info

    int index;
    char info;
    while (myfile.good()) {
        myfile >> info >> index;
        std::cout << "Read key " << info << " for queue " << index << ". ";
        //std::cout << index;
        queueList[index].insertOrMove(info);
        queueList[index].print(index);
    }
    myfile.close();
}