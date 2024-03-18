#include <iostream>
extern void hexDigits(int *numbers,int length);
extern int* readNumbers();
extern void printNumbers(int *numbers,int length);

int main(int argc, char const *argv[])
{
    int* array = readNumbers();
    hexDigits(array, 10);
    delete [] array;

    return 0;
}
