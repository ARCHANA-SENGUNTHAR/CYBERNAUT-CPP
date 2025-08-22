//C++ Practical Examination
/*
I) Scenario: You are tasked with creating a simple student information system. The program should allow users to input and manage student records, including details like name, roll number, marks for various subjects, and calculate aggregate marks and grades.


Requirements:
1. Create a class Student to represent a student with attributes like name, roll number, and 
subject-wise marks. 
2. Implement methods for calculating the aggregate marks and determining the grade 
based on the grading system (e.g., A, B, C, D, F).
3. Allow users to input student records, update existing records, and view individual 
student details. 
4. Include a search feature to find a student by roll number. 
5. Display class statistics such as the average marks, highest and lowest marks, and the 
number of students in the class. 
6. Store student data in a file to enable data persistence across program runs.
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> // for accumulate

using namespace std;

class Student {
private:
    string name;
    int roll_number;
    vector<int> marks;  // storing marks for each subject
public:
    Student(string name, int roll_number, vector<int> marks) {
        this->name = name;
        this->roll_number = roll_number;
        this->marks = marks;
    }

    int get_roll_number() const {
        return roll_number;
    }

    string get_name() const {
        return name;
    }

    void update_marks(int index, int new_mark) {
        marks[index] = new_mark;
    }

    int calculate_aggregate() const {
        return accumulate(marks.begin(), marks.end(), 0);
    }

    char calculate_grade() const {
        int aggregate_marks = calculate_aggregate();
        if (aggregate_marks >= 90)
            return 'A';
        else if (aggregate_marks >= 80)
            return 'B';
        else if (aggregate_marks >= 70)
            return 'C';
        else if (aggregate_marks >= 60)
            return 'D';
        else
            return 'F';
    }

    void display_student_details() const {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll_number << endl;
        cout << "Marks:" << endl;
        for (int i = 0; i < marks.size(); i++) {
            cout << "Subject " << i + 1 << ": " << marks[i] << endl;
        }
        cout << "Aggregate Marks: " << calculate_aggregate() << endl;
        cout << "Grade: " << calculate_grade() << endl;
    }
};

vector<Student> students;

void add_student() {
    string name;
    int roll_number;
    vector<int> marks;
    int num_subjects;

    cout << "Enter student's name: ";
    cin.ignore(); // to clear the buffer before getline
    getline(cin, name);

    cout << "Enter roll number: ";
    cin >> roll_number;

    cout << "Enter number of subjects: ";
    cin >> num_subjects;

    cout << "Enter marks for each subject:" << endl;
    for (int i = 0; i < num_subjects; i++) {
        int mark;
        cout << "Subject " << i + 1 << ": ";
        cin >> mark;
        marks.push_back(mark);
    }

    Student student(name, roll_number, marks);
    students.push_back(student);
    cout << "Student added successfully." << endl;
}

void update_student(int roll_number) {
    for (Student &student : students) {
        if (student.get_roll_number() == roll_number) {
            cout << "Updating record for student: " << student.get_name() << endl;
            // Assume we want to update marks
            int num_subjects;
            cout << "Enter number of subjects to update: ";
            cin >> num_subjects;
            cout << "Enter updated marks for each subject:" << endl;
            for (int i = 0; i < num_subjects; i++) {
                int mark;
                cout << "Subject " << i + 1 << ": ";
                cin >> mark;
                student.update_marks(i, mark);
            }
            cout << "Student record updated successfully." << endl;
            return;
        }
    }
    cout << "Student with roll number " << roll_number << " not found." << endl;
}

void search_student(int roll_number) {
    for (const Student &student : students) {
        if (student.get_roll_number() == roll_number) {
            student.display_student_details();
            return;
        }
    }
    cout << "Student with roll number " << roll_number << " not found." << endl;
}

void display_class_statistics() {
    if (students.empty()) {
        cout << "No students found." << endl;
        return;
    }

    vector<int> aggregate_marks_list;
    for (const Student &student : students) {
        aggregate_marks_list.push_back(student.calculate_aggregate());
    }

    double average_marks = accumulate(aggregate_marks_list.begin(), aggregate_marks_list.end(), 0.0) / students.size();
    int highest_marks = *max_element(aggregate_marks_list.begin(), aggregate_marks_list.end());
    int lowest_marks = *min_element(aggregate_marks_list.begin(), aggregate_marks_list.end());
    int num_students = students.size();

    cout << "Class Statistics:" << endl;
    cout << "Average Marks: " << average_marks << endl;
    cout << "Highest Marks: " << highest_marks << endl;
    cout << "Lowest Marks: " << lowest_marks << endl;
    cout << "Number of Students: " << num_students << endl;
}

int main() {
    int choice;
    int roll_number;

    do {
        cout<<" ------------------------------------------------"<<endl;
        cout << "\n ******Student Information System Menu *******" << endl;
        cout<<"\n ------------------------------------------------"<<endl;
        cout << "1. Add Student" << endl;
        cout << "2. Update Student Record" << endl;
        cout << "3. Search Student" << endl;
        cout << "4. Display Class Statistics" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                add_student();
                break;
            case 2:
                cout << "Enter roll number to update: ";
                cin >> roll_number;
                update_student(roll_number);
                break;
            case 3:
                cout << "Enter roll number to search: ";
                cin >> roll_number;
                search_student(roll_number);
                break;
            case 4:
                display_class_statistics();
                break;
            case 5:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 5);

    return 0;
}
