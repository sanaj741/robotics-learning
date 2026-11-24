#include <iostream>

int main()
{
    int a,b;
    char op;

    std::cout <<"Enter the Values";
    std::cin >> a >> b;
    std::cout <<"Enter the Operator";
    std::cin >> op;

    switch(op)
    {
        case '/':
            std::cout <<"Result  : " << a/b << "\n";
            break;
        
        case '*':
            std::cout <<"Result  : " << a*b << "\n";
            break;
        
        case '+':
            std::cout <<"Result  : " << a+b << "\n";
            break;  
        
        case '-':
            std::cout <<"Result  : " << a-b << "\n";
            break;
        
        default:
            std::cout <<"invalid \n";
            break;
    }

    return 0;
}

