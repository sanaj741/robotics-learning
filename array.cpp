#include <iostream>
#include <array>

int main()
{
    //different ways for intialization

    std::array <int, 5> distance{10,20,30,40,50};
    // std::array <int, 5> distance = {10,20,30,40,50};
    // std::array <int, 5> distance;
    // distance = {10,20,30,40,50};

    //can access using array_name[index] or array_name.at(index)
    std::cout << distance[0] << std::endl;
    std::cout << distance[4] << std::endl;

    std::cout << distance.at(1) << std::endl;
    std::cout << distance.at(4) << std::endl;

    std::cout << distance.size() << std::endl;
    
    std::cout << distance.front() << std::endl;
    std::cout << distance.back() << std::endl;

    
    return 0;
}