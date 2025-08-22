//ASG-13
//2) Write a C++ program using this pointer and get the student name, Id, Department, Age from the user.
#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    int id;
    string department;
    int age;
public:
    Student() {}

    void setName(string n) {
        name = n;
    }

    void setId(int i) {
        id = i;
    }

    void setDepartment(string dep) {
        department = dep;
    }

    void setAge(int a) {
        age = a;
    }

    void display() {
        cout << "Name: " << name << ", ID: " << id << ",
        Department: " << department << ", Age: " << age << endl;
    }
};

int main() {
    Student student;
    string name, department;
    int id, age;

    cout << "Enter student name: ";
    getline(cin, name);

    cout << "Enter student ID: ";
    cin >> id;
    cin.ignore(); // Ignore the newline character left in the input buffer

    cout << "Enter student department: ";
    getline(cin, department);

    cout << "Enter student age: ";
    cin >> age;

    student.setName(name);
    student.setId(id);
    student.setDepartment(department);
    student.setAge(age);

    cout << "\nStudent Information:" << endl;
    student.display();

    return 0;
}

