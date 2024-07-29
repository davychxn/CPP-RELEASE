#include <iostream>
#include "./ResourceRelease.h"

class Seattle
{

};

class Vancouver
{

};

class Guangzhou
{

};

int main()
{
    std::cout << "Hello World!\n";

    Seattle* city1 = new Seattle;
    Vancouver* city2 = new Vancouver;
    Guangzhou* cityArr1 = new Guangzhou[5];

    printf("Cities online: %d, %d, %d\n", !!city1, !!city2, !!cityArr1);

    ResourceRelease<Seattle*>::release(city1);
    ResourceRelease<Vancouver*>::release(city2);
    ResourceRelease<Guangzhou*>::releaseArr(cityArr1);

    printf("Cities online: %d, %d, %d\n", !!city1, !!city2, !!cityArr1);
}
