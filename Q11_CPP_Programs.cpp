#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    float price;

    void input() {
        cout << "Enter brand: ";
        cin >> brand;

        cout << "Enter price: ";
        cin >> price;
    }

    void display() {
        cout << "Brand: " << brand;
        cout << ", Price: " << price << endl;
    }
};

int main() {
    Car c1, c2;

    cout << "Enter first car details:\n";
    c1.input();

    cout << "Enter second car details:\n";
    c2.input();

    cout << "\nCar Details:\n";
    c1.display();
    c2.display();

    return 0;
}
