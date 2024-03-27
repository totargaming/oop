#include "Bike_yard.h"
#ifndef BIKEYARD_H
#define BIKEYARD_H


Bike_yard::Bike_yard(int capacity) : capacity(capacity), current(0)
{
    list = new Bike[capacity];
}
Bike_yard::Bike_yard() : Bike_yard(0)
{
}

int Bike_yard::get_Total_Stock_Count()
{
    return current;
} // count of the current number of bikes in yard
int Bike_yard::get_Stock_Quantity(int code)
{
    int count = 0;
    for (int i = 0; i < current; i++)
    {
        if (list[i].getCode() == code)
        {
            count++;
        }
    }
    return count;

} // count of the number of bikes with brand code equal to "code"
Bike *Bike_yard::get_Current_Stock_List()
{
    return list;
} // gets an array containing all the bikes in the yard

Bike_yard::~Bike_yard()
{
    delete[] list;
} // destructor

    bool Bike_yard::add_Stock(Bike b) {
        if (current < capacity) {
            list[current++] = b;
            return true;
        }
        else return false;

    } // tries to add a bike to yard. If there is enough space, return true

#endif // !BIKEYARD
