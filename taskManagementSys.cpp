//C++ Practical Examination
/*
II) Scenario: You are assigned to develop a "Task Management System" in C++. This 
system is intended to help individuals or teams manage tasks, set priorities, track 
progress, and generate reports

Requirements:
1. How will you design the classes to represent tasks and users? What attributes and 
methods will you include in these classes?
2. What kind of user interface will you implement for users to interact with the system? 
Will it be a command-line interface or a graphical interface?
3. Describe the process for adding, updating, and deleting tasks. How will you handle task 
details, deadlines, priorities, and categorization? 
4. Explain how you will allow users to update the progress of their tasks, set status, and 
mark tasks as completed.
*/
#include <iostream>
#include <vector>
#include <string>
#include <ctime>

using namespace std;

// Defining a  Date structure
struct Date {
    int day;
    int month;
    int year;
};

// Task class definition
class Task {
private:
    int taskId;
    string title;
    string description;
    Date deadline;
    int priority; //Range:1 (low) to 5 (high)
    bool completed;
    int progress; // in percentage

public:
    Task(int id, string t, string desc, Date ddl, int prio)
        : taskId(id), title(t), description(desc), deadline(ddl),
        priority(prio), completed(false), progress(0) {}

    //Getting details 
    int getTaskId() const { return taskId; }
    string getTitle() const { return title; }
    string getDescription() const { return description; }
    Date getDeadline() const { return deadline; }
    int getPriority() const { return priority; }
    
    bool isCompleted() const { return completed; }
    int getProgress() const { return progress; }

    // SettSetting details 
    void setTitle(string t) { title = t; }
    void setDescription(string desc) { description = desc; }
    void setDeadline(Date ddl) { deadline = ddl; }
    void setPriority(int prio) { priority = prio; }
     
    void markAsCompleted() { completed = true; }
    void updateProgress(int prog) { progress = prog; }
};

// User class definition
class User {
private:
    int userId;
    string username;
    string password;
    vector<Task> tasks;

public:
    User(int id, string uname, string pwd)
        : userId(id), username(uname), password(pwd) {}

    int getUserId() const { return userId; }
    string getUsername() const { return username; }
    string getPassword() const { return password; }
    vector<Task>& getTasks() { return tasks; }

    void addTask(Task task) {
        tasks.push_back(task);
    }

    void updateTask(int taskId, Task updatedTask) {
        for (auto& task : tasks) {
            if (task.getTaskId() == taskId) {
                task = updatedTask;
                return;
            }
        }
        cout << "Task with ID " << taskId << " not found." 
        << endl;
    }

    void deleteTask(int taskId) {
        for (auto it = tasks.begin(); it != tasks.end(); ++it) {
            if (it->getTaskId() == taskId) {
                tasks.erase(it);
                cout << "Task with ID " << taskId << " deleted." 
                << endl;
                return;
            }
        }
        cout << "Task with ID " 
        << taskId << " not found." << endl;
    }
};

// Function to display menu and handle user inputs
void displayMenu() {
    cout << "===== Task Management System =====" << endl;
    cout << "1. Add Task" << endl;
    cout << "2. Update Task" << endl;
    cout << "3. Delete Task" << endl;
    cout << "4. Mark Task as Completed" << endl;
    cout << "5. Exit" << endl;
    cout << "==================================" << endl;
    cout << "Enter your choice: ";
}

int main() {
    User user(1, "user1", "password");

    int choice;
    do {
        displayMenu();
        cin >> choice;
        cin.ignore(); // clear buffer

        switch (choice) {
            case 1: {
                // Add Task
                int taskId = user.getTasks().size() + 1; // simple ID assignment
                cout << "Enter task title: ";
                string title;
                getline(cin, title);
                cout << "Enter task description: ";
                string desc;
                getline(cin, desc);
                cout << "Enter deadline (DD MM YYYY): ";
                Date ddl;
                cin >> ddl.day >> ddl.month >> ddl.year;
                cout << "Enter priority (1-5): ";
                int priority;
                cin >> priority;
                
                cin.ignore(); // to clear buffer
                              Task newTask(taskId, title, desc, ddl, priority);
                user.addTask(newTask);
                cout << "Task added successfully." << endl;
                break;
            }
            case 2: {
                // Update Task
                cout << "Enter task ID to update: ";
                int taskId;
                cin >> taskId;
                cin.ignore(); //to clear buffer

                bool found = false;
                for (auto& task : user.getTasks()) {
                    if (task.getTaskId() == taskId) {
                        cout << "Enter updated task title: ";
                        string title;
                        getline(cin, title);
                        cout << "Enter updated task description: ";
                        string desc;
                        getline(cin, desc);
                        cout << "Enter updated deadline (DD MM YYYY): ";
                        Date ddl;
                        cin >> ddl.day >> ddl.month >> ddl.year;
                        cout << "Enter updated priority (1-5): ";
                        int priority;
                        cin >> priority;
                        
                        cin.ignore(); //to clear buffer
                        
                        task.setTitle(title);
                        task.setDescription(desc);
                        task.setDeadline(ddl);
                        task.setPriority(priority);
                        
                        
                        cout << "Task updated successfully." << endl;
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "Task with ID " << taskId << " not found." << endl;
                }
                break;
            }
            case 3: {
                // Delete Task
                cout << "Enter task ID to delete: ";
                int taskId;
                cin >> taskId;
                cin.ignore(); // clear buffer

                user.deleteTask(taskId);
                break;
            }
            case 4: {
                // Mark Task as Completed
                cout << "Enter task ID to mark as completed: ";
                int taskId;
                cin >> taskId;
                cin.ignore(); // clear buffer

                bool found = false;
                for (auto& task : user.getTasks()) {
                    if (task.getTaskId() == taskId) {
                        task.markAsCompleted();
                        cout << "Task marked as completed." << endl;
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "Task with ID " << taskId << " not found." << endl;
                }
                break;
            }
            case 5:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }

        cout << endl;
    } while (choice != 5);

    return 0;
}
