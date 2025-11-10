

/*Name: Elton Mwangi
Reg no: BSC-03-0112/2025
Description:Polymorphism demonstation*/
#include <iostream>
#define PI 3.14
using namespace std;
//base class shape
class Shape{
    public:
    // creating virtual function 
    virtual void area(){
        cout<<""<<endl;
    }
};
// creating derived class Rectangle
class Rectangle: public Shape{
    private:
    double length, width;
    //constructor to initialize variables
    public:
    Rectangle(double l, double w){
        length = l;
        width = w;
    }
    //function to override area method
    void area () override{
        cout<<"The area of the rectangle is: "<<length * width<<endl;
    }
};
// creating derived class circle
class Circle:public Shape{
    private:
    double radius;
    // constructor to initialize variable radius
   public:
    Circle(double r){
        radius = r;
    }
    // function to override area function
    void area() override {
        cout <<"The area of the circle is: "<<PI * radius * radius <<endl;
    }
};
/*creating class polymorphismtest to allow user to select
shape and enter values of either length, width or radius depending on shape.*/
class PolymorphismTest{
    public:
    void Runtests(){
        Shape* shapePtr;
        string choice;
        cout<<"Choose a shape:\n. Rectangle\n. or Circle\n. Enter your choice:"<<endl;
        cin >> choice;

        if (choice == "Rectangle"){
            double length, width;
            cout<<"Enter the length: "<<endl;
            cin >> length;
             cout<<"Enter the width: "<<endl;
            cin >> width;
            Rectangle re(length, width);
            shapePtr = &re;

        }
        else if (choice == "Circle"){
            double radius;
            cout<<"Enter the Radius:"<<endl;
            cin>> radius;

            Circle cir(radius);
            shapePtr =&cir;
        }
        else{
            cout<<"Invalid Choice"<<endl;
            return;
        }

        shapePtr->area();
    
    }
};
// main function to run test
int main(){
    PolymorphismTest test;
    test.Runtests();
    return 0;
}