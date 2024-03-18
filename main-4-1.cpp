#include <iostream>
extern int* readNumbers();
extern void printNumbers(int *numbers,int length);
int secondSmallestSum(int *numbers,int length) ;
int main(int argc, char const *argv[])
{
    int* array = readNumbers();
    int result = secondSmallestSum(array, 10);
    std::cout << "answer is:" << result << std::endl;
    delete [] array;

    return 0;
}
