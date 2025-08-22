//ASG-15
/*
2) Design a custom exception class, e.g., MyException, and create a program that throws and
catches instances of this custom exception. Show how to pass information about the error using
your custom exception.
*/
#include <iostream>


class MyException : public std::exception {
private:
    std::string message;

public:
    // Constructor
    MyException(const std::string& msg) : message(msg) {}

    // Override what() method to return the exception message
    const char* what() const noexcept override {
        return message.c_str();
    }
};

int main() {
    try {
        // Throw an instance of MyException
        throw MyException("Custom exception occurred: Division by zero");
    } catch (const MyException& e) {
        // Catch the custom exception and display the error message
        std::cerr << "Caught custom exception: " << e.what() << std::endl;
    }

    return 0;
}
