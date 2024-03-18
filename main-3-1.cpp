#include <iostream>
extern int* readNumbers();
extern void printNumbers(int *numbers,int length);
extern bool equalsArray(int *numbers1,int *numbers2,int length) ;

int main(int argc, char const *argv[])
{
    int* array1 = readNumbers();
    int* array2 = readNumbers();
    std::cout <<     equalsArray(array1, array2, 10) << std::endl;
    delete [] array1;
    delete [] array2;

    return 0;
}
