#include <iostream>
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
     if (length <= 0)
    {
return;    }
    for (int i = 0; i < length; i++)
    {
        std::cout << i << " " << numbers[i] << std::endl;
    }
    
}
bool equalsArray(int *numbers1,int *numbers2,int length) {
     if (length <= 0)
    {
return false;    }
    for (int i = 0; i < length; i++)
    {
        if (numbers1[i] != numbers2[i])
        {
            return false;
        }
        
    }
    return true;
    
};


