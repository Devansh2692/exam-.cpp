#include <iostream>
#include <cmath>
using namespace std;

// Base class Shape
class Shape {
private:
    string color;  // Private attribute for color
    double area;   // Private attribute for area

public:
    // Setter for color
    void setColor(const string &col) {
        color = col;
    }

    // Getter for color
    string getColor() const {
        return color;
    }

    // Getter for area
    double getArea() const {
        return area;
    }

    // Virtual method to calculate area (for abstraction)
    virtual void calculateArea() = 0;  // Pure virtual function
};

// Derived class Circle
class Circle : public Shape {
private:
    double radius;  // Radius of the circle

public:
    // Constructor for Circle
    Circle(double r) : radius(r) {}

    // Method to set the radius
    void setRadius(double r) {
        radius = r;
    }

    // Override the calculateArea method to calculate the area of the circle
    void calculateArea() override {
        double area = M_PI * radius * radius;  // Area of the circle: π * r²
        cout << "Area of the Circle: " << area << endl;
    }
};

// Derived class Rectangle
class Rectangle : public Shape {
private:
    double length, width;  // Length and width of the rectangle

public:
    // Constructor for Rectangle
    Rectangle(double l, double w) : length(l), width(w) {}

    // Method to set the length and width
    void setDimensions(double l, double w) {
        length = l;
        width = w;
    }

    // Override the calculateArea method to calculate the area of the rectangle
    void calculateArea() override {
        double area = length * width;  // Area of the rectangle: length * width
        cout << "Area of the Rectangle: " << area << endl;
    }
};

// Main function to demonstrate the functionality
int main() {
    // Create a Circle object and set its color and radius
    Circle circle(5.0);  // Radius of 5
    circle.setColor("Red");

    // Create a Rectangle object and set its color, length, and width
    Rectangle rectangle(4.0, 6.0);  // Length of 4 and width of 6
    rectangle.setColor("Blue");

    // Display the color of the shapes
    cout << "Circle Color: " << circle.getColor() << endl;
    cout << "Rectangle Color: " << rectangle.getColor() << endl;

    // Calculate and display the area of each shape
    circle.calculateArea();       // Circle's area
    rectangle.calculateArea();    // Rectangle's area

    return 0;
}
