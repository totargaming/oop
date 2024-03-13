#include <iostream>

extern double arrayMin(double* , int );

int main(int argc, char const *argv[])
{
    double array[10] = {1.2,2.2,3.4,2.1,4.5,2.2,5.6,5.2,7.1,3.8};
    double min = arrayMin(array,10);
    std::cout << "Min is: " << min << std::endl;
    return 0;
}
