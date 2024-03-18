#include "Person.h"
#include <iostream>
int main(int argc, char const *argv[])
{
    PersonList list = createPersonList(3);
    for (int i = 0; i < list.numPeople; i++)
    {
        std::cout << "Name: " << list.people[i].name << ", Age: " << list.people[i].age << std::endl;
    }

    return 0;
}
