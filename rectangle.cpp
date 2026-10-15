#include <iostream>
using namespace std;

class Rectangle {
private:
    double width;
    double length;

public:
    // Constructor
    Rectangle(double w = 0, double l = 0) {
        width = w;
        length = l;
    }

    // Setters
    void setWidth(double w) {
        width = w;
    }

    void setLength(double l) {
        length = l;
    }

    // Getters
    double getWidth() const {
        return width;
    }

    double getLength() const {
        return length;
    }

    // Calculate area
    double calculateArea() const {
        return width * length;
    }

    // Calculate perimeter
    double calculatePerimeter() const {
        return 2 * (width + length);
    }
};

int main() {
    // Create a Rectangle object using the constructor
    Rectangle rectangle1(5, 10);

    cout << "Rectangle 1" << endl;
    cout << "Width: " << rectangle1.getWidth() << endl;
    cout << "Length: " << rectangle1.getLength() << endl;
    cout << "Area: " << rectangle1.calculateArea() << endl;
    cout << "Perimeter: " << rectangle1.calculatePerimeter() << endl;

    cout << endl;

    // Create another Rectangle object and set its dimensions
    Rectangle rectangle2;

    rectangle2.setWidth(7);
    rectangle2.setLength(4);

    cout << "Rectangle 2" << endl;
    cout << "Width: " << rectangle2.getWidth() << endl;
    cout << "Length: " << rectangle2.getLength() << endl;
    cout << "Area: " << rectangle2.calculateArea() << endl;
    cout << "Perimeter: " << rectangle2.calculatePerimeter() << endl;

    return 0;
}
