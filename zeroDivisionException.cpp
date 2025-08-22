//ASG-15
/* 
1) Write a C++ program that takes two integers as input and handles the division by zero
exception. If the denominator is zero, catch the exception and display an appropriate error
message. 
*/
#include <iostream>


int main() {
    int numerator, denominator;

    std::cout << "Enter the numerator: ";
    std::cin >> numerator;

    std::cout << "Enter the denominator: ";
    std::cin >> denominator;

    try {
        if (denominator == 0) {
            throw std::runtime_error("Error: Division by zero");
        }
        int result = numerator / denominator;
        std::cout << "Result of division: " << result << std::endl;
    } catch (const std::runtime_error& e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}

