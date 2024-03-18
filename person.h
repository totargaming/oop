#ifndef PERSON
#define PERSON
#include <string>
struct Person {
    std::string name;
    int age;
};
struct PersonList {
    Person* people;
    int numPeople;
};
PersonList createPersonList(int n);
Person* createPersonArray(int n);
PersonList deepCopyPersonList(PersonList pl);
PersonList shallowCopyPersonList(PersonList pl);
PersonList shallowCopyPersonList(PersonList pl);

#endif