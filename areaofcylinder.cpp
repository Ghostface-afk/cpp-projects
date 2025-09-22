/*
Name: Lawrence
REg No: BCs-03-0052/20255
Description: implement a class called cylinder with thre data memebers radius and height.
*/

#include <iostream>
using namespace std;

class cylinder{
public:
//member variables
    float radius;
    float height;
    const float pi = 3.14;
//member functions
    double calculateVolume() {
        return pi * radius * radius *height;
    }

    double calculateSarea() {
        return (2 * pi * radius * radius) + (2 * pi *radius *height);
    }
};

    int main() {

        cylinder cylinder1;
        double Sarea, Volume;

        cylinder1.radius = 14;
        cylinder1.height = 36;

        Volume = cylinder1.calculateVolume();
        Sarea = cylinder1.calculateSarea();

        cout << "The volume of the cylinder is " << Volume << "m" << endl;
        cout << "The Surface Area of the cylinder is " << Sarea << "m" << endl;
        return 0;
    }