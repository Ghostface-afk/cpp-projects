//name:Lawrence
//Adm no: BCS-03-0052/2025
//description: This program defines a base class Shape and derived classes Rectangle and Circle. It demonstrates inheritance, encapsulation, and polymorphism by calculating and displaying the area of each shape along with its color.
#include <iostream>
#include <string>
#include <cmath>   // for M_PI
using namespace std;

// Base class
class Shape {
protected:
    string color;

public:
    // Constructor
    Shape(string c) {
        color = c;
    }

    // Setter
    void setColor(string c) {
        color = c;
    }

    // Getter
    string getColor() {
        return color;
    }
};

// Derived class Rectangle
class Rectangle : public Shape {
private:
    float length;
    float width;

public:
    // Constructor
    Rectangle(float l, float w, string c) : Shape(c) {
        length = l;
        width = w;
    }

    // Area function
    float area() {
        return length * width;
    }
};

// Derived class Circle
class Circle : public Shape {
private:
    float radius;

public:
    // Constructor
    Circle(float r, string c) : Shape(c) {
        radius = r;
    }

    // Area function
    float area() {
        return M_PI * radius * radius;
    }
};

// Main function
int main() {
    // Create objects
    Rectangle rect(10, 5, "Red");
    Circle circ(7, "Blue");

    // Display details
    cout << "Rectangle -> Color: " << rect.getColor()
         << ", Area: " << rect.area() << endl;

    cout << "Circle -> Color: " << circ.getColor()
         << ", Area: " << circ.area() << endl;

    return 0;
}
