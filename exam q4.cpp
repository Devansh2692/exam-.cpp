#include <iostream>
#include <cmath>
using namespace std;

// Base class Shape
class Shape {
private:
    string color;

public:
    // Setter and Getter for color
    void setColor(const string &col) {
        color = col;
    }

    string getColor() const {
        return color;
    }

    // Pure virtual methods
    virtual void calculateArea() = 0;
    virtual void display() = 0;  // New virtual function

    // Virtual destructor (good practice when using base class pointers)
    virtual ~Shape() {}
};


// Derived class Circle
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    void calculateArea() override {
        double area = M_PI * radius * radius;
        cout << "Circle Area: " << area << endl;
    }

    void display() override {
        cout << "Shape: Circle" << endl;
        cout << "Color: " << getColor() << endl;
        cout << "Radius: " << radius << endl;
        calculateArea();
        cout << endl;
    }
};


// Derived class Rectangle
class Rectangle : public Shape {
private:
    double length, width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    void calculateArea() override {
        double area = length * width;
        cout << "Rectangle Area: " << area << endl;
    }

    void display() override {
        cout << "Shape: Rectangle" << endl;
        cout << "Color: " << getColor() << endl;
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        calculateArea();
        cout << endl;
    }
};


int main() {
    // Create objects
    Circle c(5.0);
    c.setColor("Red");

    Rectangle r(4.0, 6.0);
    r.setColor("Blue");

    // Array of Shape pointers
    Shape* shapes[2];
    shapes[0] = &c;
    shapes[1] = &r;

    // Demonstrate polymorphism
    cout << "Displaying information using polymorphism:\n" << endl;

    for (int i = 0; i < 2; i++) {
        shapes[i]->display();   // Calls the appropriate derived class method
    }

    return 0;
}
