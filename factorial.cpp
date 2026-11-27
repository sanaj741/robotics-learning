#include <iostream>

int fact(int i)
{
    if(i == 1)
    {
        return i;
    }else
    {
        std::cout << " num : " << i << std::endl;
        return i*fact(i-1);
    }

}

int main()
{

    int factorial = fact(6);
    std::cout << "factorial : "  << factorial << std::endl;

}