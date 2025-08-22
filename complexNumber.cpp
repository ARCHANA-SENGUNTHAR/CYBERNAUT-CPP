//ASG-14
/*
2) Design a class "ComplexNumber" to represent complex numbers. Implement operator
overloading for addition, subtraction, multiplication, and division of complex numbers.
*/
#include <iostream>

class ComplexNumber {
private:
    double real;
    double imaginary;

public:
    // Constructor
    ComplexNumber(double real, double imaginary) : real(real), imaginary(imaginary) {}

    // Overloading addition operator
    ComplexNumber operator+(const ComplexNumber& other) {
        return ComplexNumber(real + other.real, imaginary + other.imaginary);
    }

    // Overloading subtraction operator
    ComplexNumber operator-(const ComplexNumber& other) {
        return ComplexNumber(real - other.real, imaginary - other.imaginary);
    }

    // Overloading multiplication operator
    ComplexNumber operator*(const ComplexNumber& other) {
        double newReal = real * other.real - imaginary * other.imaginary;
        double newImaginary = real * other.imaginary + imaginary * other.real;
        return ComplexNumber(newReal, newImaginary);
    }

    // Overloading division operator
    ComplexNumber operator/(const ComplexNumber& other) {
        double divisor = other.real * other.real + other.imaginary * other.imaginary;
        double newReal = (real * other.real + imaginary * other.imaginary) / divisor;
        double newImaginary = (imaginary * other.real - real * other.imaginary) / divisor;
        return ComplexNumber(newReal, newImaginary);
    }

    // Display the complex number
    void display() {
        std::cout << real << " + " << imaginary << "i" << std::endl;
    }
};

int main() {
    // Creating complex numbers
    ComplexNumber num1(3, 2);
    ComplexNumber num2(1, -1);

    // Addition
    ComplexNumber sum = num1 + num2;
    std::cout << "Sum: ";
    sum.display();

    // Subtraction
    ComplexNumber diff = num1 - num2;
    std::cout << "Difference: ";
    diff.display();

    // Multiplication
    ComplexNumber product = num1 * num2;
    std::cout << "Product: ";
    product.display();

    // Division
    ComplexNumber quotient = num1 / num2;
    std::cout << "Quotient: ";
    quotient.display();

    return 0;
}
