#include <iostream>
#include <string>

#include "Car.hpp"

Car::Car() {
    std::string make = "-";
    std::string model = "-";
    int year = 1900;
    double MPG = 0.0;
}

Car::Car(const std::string& mk, const std::string& mdl, int y, double m){
    setMake(mk);
    setModel(mdl);
    setYear(y);
    setMPG(m);
}

void Car::printInfo() const {
    std::cout << "Make:\t\t" << make << std::endl;
    std::cout << "Model:\t\t" << model << std::endl;
    std::cout << "Year:\t\t" << year << std::endl;
    std::cout << "MPG:\t\t" << MPG << std::endl;
}

std::string Car::getMake() const{
    return make;
}
std::string Car::getModel() const{
    return model;
}
int Car::getYear() const{
    return year;
}
double Car::getMPG() const{
    return MPG;
}

void Car::setMake(const std::string& mk) {
    make = mk;
}
void Car::setModel(const std::string& md) {
    model = md;
}
void Car::setYear(int y) {
    year = y;
}
void Car::setMPG(double m) {
    MPG = m;
}