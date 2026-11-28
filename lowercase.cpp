#include <iostream>
#include <string>

int main()
{
    std::string text = "HELLO";


    for (char &c : text) {
        if (c >= 'A' && c <= 'Z') {
            c += 32;
        }
    }

    std::cout << text << std::endl; 
    return 0;


}