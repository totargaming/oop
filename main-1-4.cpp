#include <iostream>
#include "person.h"
int main() {
    // Create a PersonList object
    PersonList originalList;
    originalList.numPeople = 3;
    originalList.people = new Person[originalList.numPeople];

    // Populate the originalList with some people
    originalList.people[0].name = "John";
    originalList.people[0].age = 25;
    originalList.people[1].name = "Jane";
    originalList.people[1].age = 30;
    originalList.people[2].name = "Bob";
    originalList.people[2].age = 40;

    // Perform deep copy of the originalList
    PersonList copiedList = shallowCopyPersonList(originalList);

    // Change the numPeople field in copiedList
    copiedList.numPeople = 2;

    // Print the copiedList
    for (int i = 0; i < copiedList.numPeople; i++) {
        std::cout << "Person " << i+1 << ": " << copiedList.people[i].name << ", " << copiedList.people[i].age << std::endl;
    }
    // Change the value of the copiedList
    copiedList.people[0].name = "Alice";
    copiedList.people[0].age = 35;

    // Print the originalList
    std::cout << "Original List:" << std::endl;
    for (int i = 0; i < originalList.numPeople; i++) {
        std::cout << "Person " << i+1 << ": " << originalList.people[i].name << ", " << originalList.people[i].age << std::endl;
    }

    // Print the copiedList
    std::cout << "Copied List:" << std::endl;
    for (int i = 0; i < copiedList.numPeople; i++) {
        std::cout << "Person " << i+1 << ": " << copiedList.people[i].name << ", " << copiedList.people[i].age << std::endl;
    }
    // Print the numPeople in originalList
    std::cout << "NumPeople in originalList: " << originalList.numPeople << std::endl;

    // Print the numPeople in copiedList
    std::cout << "NumPeople in copiedList: " << copiedList.numPeople << std::endl;
    // Clean up memory
    delete[] originalList.people;

    return 0;
}