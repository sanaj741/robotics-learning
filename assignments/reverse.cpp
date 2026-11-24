#include <iostream>

int main()
{
    int input, 
    reverse  = 0;

    std::cout << "Enter the number" << std::endl;
    std::cin >> input;

    if(input < 0)
    {
        std::cout << "Invalid number " << std::endl;
        std::exit(1);
    }

    while(input > 0)
    {
        reverse = (reverse * 10) + input%10;
        input/=10;

    }

    std::cout << "Reverse : " << reverse << std::endl; 

    return 0;
}