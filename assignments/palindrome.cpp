#include <iostream>

int main()
{
    int input,
    temp_input, 
    reverse  = 0;

    std::cout << "Enter the number" << std::endl;
    std::cin >> input;


    if(input < 0)
    {
        std::cout << "Invalid number " << std::endl;
        std::exit(1);
    }

    temp_input = input;

    while(temp_input > 0)
    {
        reverse = (reverse * 10) + temp_input%10;
        temp_input/=10;

    }

    if(reverse == input)
    {
        std::cout << "Number is palindrome " << std::endl; 
    }else
    {
        std::cout << "Not Plaidrome" << std::endl; 
    }

    return 0;
}