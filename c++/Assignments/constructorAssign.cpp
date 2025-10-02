//Name: Lawrence Odanga
//Adm Number :  BCS-03-0052/2025
//Description: This code shows a constructor with four attributes

#include <iostream>
#include <string>
using namespace std;

// Step 1: Define the class
class Car {
private:
    string brand;
    string model;
    float price;
    int mileage;

public:
    // Step 2: Constructor
    Car(string b, string m, float p, int mil) {
        brand = b;
        model = m;
        price = p;
        mileage = mil;
    }

    // Step 3: Display function
    void display() {
        cout << "Car Details:" << endl;
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Price: $" << price << endl;
        cout << "Mileage: " << mileage << " miles" << endl;
    }

    // Step 4: Drive function
    void drive(int distance) {
        mileage += distance;  // increase mileage
        cout << "After driving " << distance << " miles, updated mileage: "
             << mileage << " miles" << endl;
    }
};

// Step 5: Main function
int main() {
    // Create Car object
    Car myCar("Toyota", "Corolla", 20000, 5000);

    // Show car details
    myCar.display();

    // Drive 150 miles
    myCar.drive(150);

    // Drive 300 miles
    myCar.drive(300);

    return 0;
}
