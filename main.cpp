#include <iostream>
#include <random>
#include <algorithm>
#include <string>
#include "Utility1.h"
#include "Car1.h"

int main() {
    auto cars = randomCars();
    std::cout << "Cars: " << cars << "\n";

    unsigned long totalCars = cars.size();
    double average = 0;
    
    double min = INT32_MAX;
    double max = INT32_MIN;

    for (auto& car : cars) {
        double price = car.price();
        max = std::max(max, price);
        min = std::min(min, price);
        average += car.price();
    }
    average /= totalCars;
    double range = max - min;

    for (auto& car : cars) {
        double price = car.price();
        max = std::max(max, price);
        min = std::max(min, price);
        average += car.price();
    }
    average /= totalCars;
    double range = max - min;

    std::cout << "The average price is: $" << average << "\n";
    std::cout << "The range is: $" << range << "\n";
}