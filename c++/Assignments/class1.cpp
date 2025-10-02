/*
Name: Lawrence
REg No: BCs-03-0052/20255
Description: Classwork on classes
*/
#include <iostream>

using namespace std;

class room {
public://Assignment Operator

    //member variables
    float legnth;
    float breadth;
    float height;

    //member functions
    double calculateArea(){
        return legnth * breadth ;  
    }

    double calculateVolume(){
        return legnth * breadth *height;
    }
};

int main() {

    float area, volume;
    room room1; //object

    room1.legnth = 25;
    room1.breadth = 30;
    room1.height = 65;

    area = room1.calculateArea();
    volume = room1.calculateVolume();

    cout << "THe Area of the room is " << area <<"m" << endl;
     cout << "THe Volume of the room is " << volume <<"m" << endl;
    return 0;
}