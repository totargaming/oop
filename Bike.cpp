#include "Bike.h"

Bike::Bike() : Bike("",0) {

}
Bike::Bike(std::string brand, int code) : name(brand), code(code){

    }
std::string Bike::getBrand() {
    return name;
}
int Bike::getCode() {
    return code;
}
Bike::~Bike() {}