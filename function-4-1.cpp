#include <iostream>
#include <algorithm>
int* readNumbers() {
    int* array = new int[10];
    for (int i = 0; i < 10; i++)
    {
        std::cin >> array[i];
    }
    return array;
}
void printNumbers(int *numbers,int length) 
{
    
    
    for (int i = 0; i < length; i++)
    {
        std::cout << i << " " << numbers[i] << std::endl;
    }
    
}
int secondSmallestSum(int *numbers,int length)  {
    int sumRecord[10000];
    int count{0};
    for (int i = 0; i < length; i++)
    {
        int sum{0};
        for (int j = i; j < length; j++)
        {
            sumRecord[count++] = sum + numbers[j];
        }
        
    }
    std::sort(sumRecord, sumRecord +length);
    return sumRecord[1];
    
};

