#include <iostream>
#include <cstdlib>

int main()
{
    int num;

    std::cout << "hello tell me a number: ";
    if (!(std::cin >> num))
    {
        std::cerr << "Error: NOt a valid integer!\n";
        return EXIT_FAILURE;
    }

    if (num == 0)
    {
        std::cout << "The number is 0\n";
    }
    else if (num % 2 == 0)
    {
        std::cout << "The number is even\n";
    }
    else
    {
        std::cout << "The number is odd\n";
    }
}