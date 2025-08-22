//ASG-13
//1) Write a C++ program for the Employee database. 
#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    string name;
    int id;
    double salary;
public:
    Employee(string n, int i, double s) : name(n), id(i), salary(s) {}

    void display() {
        cout << "Name: " << name << ", ID: " << id << ", Salary: $" << salary << endl;
    }
};

class Database {
private:
    static const int MAX_EMPLOYEES = 100; // Maximum number of employees
    Employee* employees[MAX_EMPLOYEES];
    int numEmployees;
public:
    Database() : numEmployees(0) {}

    void addEmployee(Employee* emp) {
        if (numEmployees < MAX_EMPLOYEES) {
            employees[numEmployees++] = emp;
        } else {
            cout << "Database is full. Cannot add more employees." << endl;
        }
    }

    void displayAll() {
        cout << "Employee Database:" << endl;
        for (int i = 0; i < numEmployees; ++i) {
            employees[i]->display();
        }
    }
};

int main() {
    Database db;

    // Adding employees to the database
    db.addEmployee(new Employee("John Doe", 1001, 50000));
    db.addEmployee(new Employee("Jane Smith", 1002, 60000));
    db.addEmployee(new Employee("Bob Johnson", 1003, 55000));

    // Displaying all employees in the database
    db.displayAll();

    return 0;
}

