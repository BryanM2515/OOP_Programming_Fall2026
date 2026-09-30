#include <iostream>
#include <string>

#include "Car.hpp"

int main(void) {
    Car my_car;
    my_car.printInfo();

    my_car.setMake("Ferrari");
    my_car.setModel("F50");
    my_car.setYear(2015);
    my_car.setMPG(10.2);
    

    return 0;
}