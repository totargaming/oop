#include "person.h"
PersonList shallowCopyPersonList(PersonList pl) {
    PersonList list{pl.people, pl.numPeople};
    return list;

}