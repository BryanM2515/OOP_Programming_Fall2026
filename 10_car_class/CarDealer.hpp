#ifndef CARDEALER_HPP
#define CARDEALER_HPP

#include <vector>
#include "Car.hpp"

class CarDealer{
public:
    void addCar(const Car& car);
    void showInventory() const;
    
private:
    std::vector<Car> inventory;
};

#endif