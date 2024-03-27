#include <iostream>
#include <string>

class Bike
{
private:
    std::string name;
    int code;

public:
    Bike(); // default constructor - makes new bike with code number 0 and
            // and empty string "" for brand

    Bike(std::string brand, int code); // constructor taking string representing brand
                                       // and integer representing code for that brand

    std::string getBrand(); // returns the brand of the bike
    int getCode();          // returns the brand code number of bike
    ~Bike();
};