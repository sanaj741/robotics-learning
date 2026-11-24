#include <iostream>

int main()
{
    int num,digit,sum = 0;

    std::cout << "Enter the value : ";
    std::cin >> num;

    while(num > 0)
    {
        digit = num % 10;
        sum+=digit;
        num = num / 10;
        
    }
    std::cout << "Sum : " << sum <<"\n";
    return 0; 
}