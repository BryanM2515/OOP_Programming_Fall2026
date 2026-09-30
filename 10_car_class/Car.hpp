#ifndef CAR_HPP 
#define CAR_HPP

#include <iostream>
#include <string>


class Car{
public:
    Car();
    Car(const std::string& mk, const std::string& mdl, int y, double m);

    std::string getMake() const;
    std::string getModel() const;
    int getYear() const;    
    double getMPG() const;

    void setMake(const std::string& mk);
    void setModel(const std::string& md);
    void setYear(int y);    
    void setMPG(double m);

    void printInfo() const;
private:
    std::string make;
    std::string model;
    int year;
    double mpg;
    double mileage;
    double fuel_capacity;
    double fuel_level;
};

#endif