#include <iostream>
using namespace std;

class Rectangle {
private:
    // Private attributes
    double length;
    double width;

public:
    // Public setter method for length
    void setLength(double len) {
        if (len > 0) {
            length = len;
        } else {
            cout << "Length must be positive!" << endl;
        }
    }

    // Public setter method for width
    void setWidth(double w) {
        if (w > 0) {
            width = w;
        } else {
            cout << "Width must be positive!" << endl;
        }
    }

    // Public getter method for length
    double getLength() const {
        return length;
    }

    // Public getter method for width
    double getWidth() const {
        return width;
    }

    // Public method to calculate the area of the rectangle
    double calculateArea() const {
        return length * width;
    }
};

int main() {
    // Create a Rectangle object
    Rectangle rect;

    // Set length and width using setter functions
    rect.setLength(5.0);
    rect.setWidth(3.0);

    // Display the length and width
    cout << "Length: " << rect.getLength() << endl;
    cout << "Width: " << rect.getWidth() << endl;

    // Calculate and display the area
    double area = rect.calculateArea();
    cout << "Area of the rectangle: " << area << endl;

    return 0;
}
