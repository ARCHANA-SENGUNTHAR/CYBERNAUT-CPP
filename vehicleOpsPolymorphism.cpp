//ASG-14
/*
1) Define a base class Vehicle with a method start() and derive two classes Car and Bike.
Override the start() method in both derived classes to provide different behavior. Create objects
of both classes and call the start() method to demonstrate polymorphism. 
*/

#include <iostream>

// Base class Vehicle
class Vehicle {
public:
    // Method to start the vehicle
    virtual void start() {
        std::cout << "Starting the vehicle" << std::endl;
    }
};

// Derived class Car
class Car : public Vehicle {
public:
    // Override start method for Car
    void start() override {
        std::cout << "Starting the car" << std::endl;
    }
};

// Derived class Bike
class Bike : public Vehicle {
public:
    // Override start method for Bike
    void start() override {
        std::cout << "Starting the bike" << std::endl;
    }
};

int main() {
    // Creating objects of both classes
    Car car;
    Bike bike;

    // Demonstrating polymorphism by calling the start() method on both objects
    car.start();
    bike.start();

    return 0;
}
