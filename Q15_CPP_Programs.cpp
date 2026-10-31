#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() = 0;
    virtual ~Shape() {}
};

class Circle : public Shape {
    float r;

public:
    Circle(float radius) {
        r = radius;
    }

    void area() override {
        cout << "Area of Circle: " << 3.14 * r * r << endl;
    }
};

class Rectangle : public Shape {
    float length, breadth;

public:
    Rectangle(float l, float b) {
        length = l;
        breadth = b;
    }

    void area() override {
        cout << "Area of Rectangle: "
             << length * breadth << endl;
    }
};

int main() {
    Circle c(5);
    Rectangle r(4, 6);

    c.area();
    r.area();

    return 0;
}
