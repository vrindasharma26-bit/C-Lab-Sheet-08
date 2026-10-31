#include <iostream>
using namespace std;

class Student {
    string name;
    int roll_no;
    float marks;

public:
    void input() {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter roll number: ";
        cin >> roll_no;

        cout << "Enter marks: ";
        cin >> marks;
    }

    void display() {
        cout << "\nName: " << name;
        cout << "\nRoll Number: " << roll_no;
        cout << "\nMarks: " << marks;
    }
};

int main() {
    Student s;

    s.input();
    s.display();

    return 0;
}
