#include <iostream>

int main()
{
    int num,length = 0;

    std::cout << "Enter the value : ";
    std::cin >> num;

    do
    {
        length+=1;
        num = num / 10;
    } while (num > 0);
    
    std::cout << "Length : " << length <<"\n";
    return 0;
}