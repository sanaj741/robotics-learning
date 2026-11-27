#include <iostream>

void swap(int &a, int &b)
{   
    a = b + a;
    b = a - b;
    a = a - b; 
}

int main()
{
    int a,b;
    std::cout << "Enter the values  a: ";    
    std::cin >> a;
    std::cout << "Enter the values  b: ";    
    std::cin >> b;
    
    swap(a,b);

    std::cout << "swaped a : " << a << " b : " << b << std::endl;

}