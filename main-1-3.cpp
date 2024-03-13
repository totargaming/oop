#include <iostream>

double* duplicateArray(double* , int );

int main(int argc, char const *argv[])
{
    double array[10] = {1.2,2.2,3.4,2.1,4.5,2.2,5.6,5.2,7.1,3.8};
    double* new_array = duplicateArray(array,10);
    std::cout << "New array: " << std::endl;
    for (int i = 0; i < 10; i++)
    {
        std::cout << new_array[i]<< " ";
    }
    std::cout  << std::endl;
    return 0;
}
