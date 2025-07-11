#include <iostream>
#include "../incl/Array.hpp"

int main()
{
    Array<int> firstArr(5);
    Array<float> SecondArr(4);
    firstArr[4] = 6;
    std::cout << firstArr[4] << std::endl;
    std::cout << firstArr.size()<< std::endl;
    try
    {
    std::cout << firstArr[8] << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
}