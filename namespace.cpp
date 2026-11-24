#include <iostream>

namespace Sensor
{

    int id;
   
    void intialize()
    {
        std::cout << "Sensor " << id << " intialized \n";
    }

}

int main()
{
    Sensor::id = 1;
    Sensor::intialize();       
}