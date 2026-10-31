#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    void input() {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter age: ";
        cin >> age;
    }
};

class Student : public Person {
public:
    float marks;

    void inputMarks() {
        cout << "Enter marks: ";
        cin >> marks;
    }

    void display() {
        cout << "\nName: " << name;
        cout << "\nAge: " << age;
        cout << "\nMarks: " << marks;
    }
};

int main() {
    Student s;

    s.input();
    s.inputMarks();
    s.display();

    return 0;
}
