#include <iostream>
#include <string>

#include "Car.hpp"

Car::Car() {
    std::string make = "-";
    std::string model = "-";
    int year = 1900;
    double mpg = 0.0;
}

Car::Car(const std::string& mk,const std::string& md, int y, double new_mpg, double new_fcap){
    setMake(mk);
    setModel(md);
    setYear(y);
    setMPG(new_mpg);
    setFuelCap(new_fcap);
}

void Car::printInfo() const {
    std::cout << "Make\t\t" << make << std::endl;
    std::cout << "Model\t\t" << model << std::endl;
    std::cout << "Year\t\t" << year << std::endl;
    std::cout << "MPG\t\t" << mpg << std::endl;
    std::cout << "Fuel Capacity\t\t" << fuel_capacity << std::endl;
}


// Implement getters and setters


    // Setters
    void        Car::setMake(const std::string& mk){
        make = mk;
    }
    
    void        Car::setModel(const std::string& md){
        model = md;
    }
    
    void        Car::setYear(int y){
        year = y;
    }
    
    void        Car::setMPG(double new_mpg){
        mpg = new_mpg;
    }
    
    void        Car::setFuelCap(double new_fcap){
        fuel_level = new_fcap;
    }