#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    int rollNumber;
    string name;
    int mark1, mark2, mark3;

    void accept() {
        cout << "Enter roll number: ";
        cin >> rollNumber;

        cout << "Enter name (one word): ";
        cin >> name;

        cout << "Enter marks in three subjects (out of 100): ";
        cin >> mark1 >> mark2 >> mark3;
    }

    void displayResult() {
        int total = mark1 + mark2 + mark3;
        float percentage = total / 3.0;

        cout << "\nRoll number: " << rollNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << mark1 << ", " << mark2 << ", " << mark3 << endl;
        cout << "Total: " << total << "/300" << endl;
        cout << "Percentage: " << percentage << "%" << endl;

        if (mark1 >= 40 && mark2 >= 40 && mark3 >= 40) {
            cout << "Result: Pass" << endl;
        } else {
            cout << "Result: Fail" << endl;
        }
    }
};

int main() {
    Student student;
    student.accept();
    student.displayResult();
    return 0;
}
