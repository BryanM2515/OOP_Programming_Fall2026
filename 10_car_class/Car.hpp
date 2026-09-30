#ifndef CAR_HPP 
#define CAR_HPP

#include <iostream>
#include <string>


class Car {
public:
    // No arg constructor
    Car();
    Car(const std::string& m,const std::string& md, int y, double new_mpg, double new_fcap);
    // printInfo method
    void printInfo() const;

    // Getters
    std::string getMake() const{
        return make;
    }
    std::string getModel() const{
        return model;
    }
    int         getYear() const{
        return year;
    }
    double      getMPG() const{
        return mpg;
    }
    
    double getFuel_Level() const{
    	return fuel_level;
    }

    // Setters
    void        setMake(const std::string& mk);
    void        setModel(const std::string& md);
    void        setYear(int y);
    void        setMPG(double new_mpg);
    void		setFuelCap(double new_fcap);


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