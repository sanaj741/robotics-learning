#include <iostream>

int main()
{
    int num = 100;
    int *ptr = &num;

    std::cout << "value *ptr :"  << *ptr << std::endl;
    std::cout << "value ptr:"  << ptr << std::endl;

    *ptr = 200;

    std::cout << "value num :"  << num << std::endl;
    std::cout << "value ptr:"  << ptr << std::endl;


}