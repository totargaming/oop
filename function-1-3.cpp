#include "Person.h"
PersonList deepCopyPersonList(PersonList pl){
    PersonList list{new Person[pl.numPeople], pl.numPeople};
    for (int i = 0; i < pl.numPeople; i++)
    {
        list.people[i].name = pl.people[i].name;
        list.people[i].age = pl.people[i].age;
    }
    return list;
    

}