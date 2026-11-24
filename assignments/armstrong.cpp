#include <iostream>
#include <cmath>

int main()
{
    int input,
    temp_input,
    number = 0,
    result = 0,
    length = 0;

    std::cout << "Enter the value : ";
    std::cin >> input;

    temp_input = input;

    while(temp_input > 0)
    {
        length+=1;
        temp_input = temp_input / 10;
    }
    
    std::cout << "length" << length << std::endl;
    temp_input = input;

    while(temp_input > 0)
    {
        number = temp_input%10;
        result += round(pow(number,length));
        temp_input/=10;
    }
    
    std::cout << "result" << result << std::endl;

    if(result == input)
    {
        std::cout << " Number is armstrong" << std::endl;
    }else 
    {
        std::cout << "Number is not armstrong" << std::endl;
    }
    
    return 0;
}