#include "Person.h"
PersonList createPersonList(int n) {
    PersonList dummy;
    dummy.numPeople = n ;
    dummy.people = new Person[n];
    for (int i = 0; i < n; i++)
    {
        dummy.people[i].name =  "Jane Doe";
        dummy.people[i].age = 1;
    }
    return dummy;
}