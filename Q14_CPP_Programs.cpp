#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }

    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Calculator c;

    cout << "Sum of two integers: " << c.add(5, 10) << endl;
    cout << "Sum of three integers: " << c.add(5, 10, 15) << endl;
    cout << "Sum of decimals: " << c.add(2.5, 3.5);

    return 0;
}
