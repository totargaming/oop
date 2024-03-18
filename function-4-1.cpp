#include <vector>
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
int secondSmallestSum(int *numbers, int length) {
    std::vector<int> sumRecord;
    for (int i = 0; i < length; i++) {
        int sum = 0;
        for (int j = i; j < length; j++) {
            sum += numbers[j];
            sumRecord.push_back(sum);
        }
    }
    std::sort(sumRecord.begin(), sumRecord.end());
    return sumRecord[1];
}
