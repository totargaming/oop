#include <iostream>
#include "Bike.h"
int main(int argc, char const *argv[])
{
    Bike bike("Toyota",1232);
    std::cout << bike.getBrand() << std::endl;
    std::cout << bike.getCode() << std::endl;
    return 0;
}
