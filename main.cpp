#include <iostream>
#include <random>
#include <algorithm>
#include <string>
#include "Utility.h"
#include "Car.h"

bool compCars(const Car& c1, const Car& c2) {
    return c1.price() >= c2.price();
}
int main() {
    auto cars = randomCars();
    std::cout << "Initial: " << cars << "\n";
    sort(cars.begin(), cars.end(), compCars);
    std::cout << "Reversed: " << cars << std::endl;
}