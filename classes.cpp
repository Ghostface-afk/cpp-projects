/*
C++ CLASSES AND OBJECTS

Description: program to calculate the area and with of a room using class.
Name: Lawrence Odanga
Reg no: BCS-02-0052/2025
Date:22/09/2025
*/

#include<iostream>
using namespace std;

class Room{
	
	public:
		
//member variables		
		double heigth, breadth, length;

//member functions	
	double calcArea(){
		return breadth * length;
	}
	
	
	double calcVolume(){
		return breadth * length * heigth;
	}
};

int main(){
//object and variable declaration	
	Room room1;
	float area, vol;

	
	//room1.length = 20;
	//room1.breadth = 15;
	//room1.heigth = 10;
	
	cout<<"Enter length = "<<endl;
	cin>> room1.length;
    cout<<"Enter Breadth = "<<endl;
	cin>> room1.breadth;
    cout<<"Enter Heigth = "<<endl;
    cin>> room1.heigth;
	area = room1.calcArea();
	vol =  room1.calcVolume();

// output area and volume	
	cout<<"The area is = "<<area<<endl;
	cout<<"The volume is = "<<vol<<endl;
	
	
	
	return 0;
}