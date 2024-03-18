#include <iostream>
#include <string>
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


void hexDigits(int *numbers,int length){
     
    for (int i = 0; i < length; i++)
    {
        std::string character;
        switch (numbers[i])
        {
        case 10:
            character = 'A';
            break;
        case 11:
            character = 'B';
            break;
        case 12:
            character = 'C';
            break;
        case 13:
            character = 'D';
            break;
        case 14:
            character = 'E';
            break;
        case 15:
            character = 'F';
            break;
        
        default:
            character = std::to_string(numbers[i]);
            break;
        }
    std::cout << i << " " << numbers[i] <<" " <<character << std::endl;
    }
    
} ;

