#include <iostream>

int getDirection()
{
    int dir;
    std::cout << "Enter a value :";
    std::cin >> dir;
    return dir;
}

int main()
{
    switch(int direction = getDirection(); direction)
    {
        case 1:
        std::cout << "Moving Forward\n";
        break;

        case 2:
        std::cout << "Moving Backward\n";
        break;

        case 3:
        std::cout << "Left Turn\n";
        break;

        case 4:
        std::cout << "Right Turn\n";
        break;

        default:
        std::cerr << "Direction not defined\n";
        return 1;
    }

    return 0;
}