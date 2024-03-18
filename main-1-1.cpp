#include <iostream>
#include "Person.h"
int main() {
    Person* people = createPersonArray(3);
    for (int i = 0; i < 3; i++)
    {
        std::cout << "Name: " << people[i].name << ", Age: " << people[i].age << std::endl;
    }
    
    return 0;
}