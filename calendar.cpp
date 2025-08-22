//ASG-10
//1)Create a calendar using classes and objects.
#include <iostream>
using namespace std;

class Calendar {
private:
    int month;
    int year;

public:
    Calendar(int m, int y) : month(m), year(y) {}

    void display() {
        cout << "****************************" << endl;
        cout << "        Calendar " << year << endl;
        cout << "****************************" << endl;
        
        cout << " Sun Mon Tue Wed Thu Fri Sat" << endl;

        int daysInMonth = getDaysInMonth();
        int startDay = getStartDay();

        int day = 1;

        // Printing leading spaces
        for (int i = 0; i < startDay; ++i) {
            cout << "    ";
        }

        // Printing  days
        for (int i = startDay; i < 7; ++i) {
            cout.width(4);
            cout << day++;
        }
        cout << endl;

        while (day <= daysInMonth) {
            for (int i = 0; i < 7 && day <= daysInMonth; ++i) {
                cout.width(4);
                cout << day++;
            }
            cout << endl;
        }
        cout << endl;
    }

private:
    int getDaysInMonth() {
        switch (month) {
            case 4: case 6: case 9: case 11:
                return 30;
            case 2:
                if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
                    return 29;
                else
                    return 28;
            default:
                return 31;
        }
    }

    int getStartDay() {
        // Zeller's Congruence algorithm for finding the day of the week
        int m = month;
        int y = year;
        if (m < 3) {
            m += 12;
            y -= 1;
        }
        int k = y % 100;
        int j = y / 100;
        int h = (1 + (13 * (m + 1)) / 5 + k + k / 4 + j / 4 + 5 * j) % 7;
        return ((h + 5) % 7);
    }
};

int main() {
    int month, year;
    cout << "Enter month (1-12): ";
    cin >> month;
    cout << "Enter year: ";
    cin >> year;

    Calendar cal(month, year);
    cal.display();

    return 0;
}

