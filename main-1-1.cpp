#include <iostream>
extern int* readNumbers();
extern void printNumbers(int *numbers,int length);

int main(int argc, char const *argv[])
{
    int* array = readNumbers();
    printNumbers(array, 10);
    delete [] array;

    return 0;
}
