#include "Bike_yard.h"
#include <iostream>
#include "Bike.h"
int main(int argc, char const *argv[])
{
    
    Bike_yard yard (5);
    Bike a("ez",123);
    Bike b("notez", 123);
    Bike c("ok",234);
    Bike d ("haha", 123);
    Bike e("not", 123);
    Bike f("ss",123);
    std::cout << yard.add_Stock(a) << std::endl;
    std::cout << yard.add_Stock(b) << std::endl;
    std::cout << yard.add_Stock(c) << std::endl;
    std::cout << yard.add_Stock(d) << std::endl;
    std::cout << yard.add_Stock(e) << std::endl;
    std::cout << yard.add_Stock(f) << std::endl;
    std::cout << yard.get_Current_Stock_List() << std::endl;
    std::cout << yard.get_Stock_Quantity(123) << std::endl;
    std::cout << yard.get_Total_Stock_Count() << std::endl;
    return 0;
}
