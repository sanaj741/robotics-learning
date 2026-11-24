#include <iostream>


int input(){
    int num;
    std::cout << "Enter the value : ";
    std::cin >> num;

    return num;
}

int sumOfNum()
{
    
    int num = input();
    int digit;
    int sum = 0;

    while(num > 0)
    {
        digit = num % 10;
        sum+=digit;
        num = num / 10;
        
    }
    std::cout << "Sum : " << sum <<"\n";
    return 0; 
}


int lengthOfNum()
{
    int num = input();
    int length = 0;

    do
    {
        length+=1;
        num = num / 10;
    } while (num > 0);
    
    std::cout << "Length : " << length <<"\n";
    return 0;
}

int main()
{
    
    lengthOfNum();

}