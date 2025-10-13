/*
Description: a program to ask the user for hours worked per 
week and the hourly rate then computes the gross pay, taxes
 and the net salary
	Assuming the following:
		. Overtime(over 40 hours a week)= time and a half.
		. Tax rate: 15% of the first $600, 20% of the rest
Name: lawrence Odanga
Reg no: BCS-03-0052/2025
*/

#include<iostream>
using namespace std;

//Gross pay function prototype
float calcgrosspay(int hours, float rate, float overtime);

//Tax function prototype
float calctax(float gross);

//Net salary function prototype
float calcnetsalary( float gross, float tax);

//Gross pay function call
int main(){
float rate, gross, overtime;
int  hours;
cout<<"Enter hours worked this week: "<<endl;
cin>>hours;

cout<<"Enter hourly rate: "<<endl;
cin >> rate;

if (hours <= 40){
	 overtime= 0;
	
} else if (hours > 40 ) {
	 overtime = (hours-40) * 1.5;

} gross= calcgrosspay(hours, rate, overtime);

cout << "\nGross pay : $" <<gross<<endl;

//Taxes function call
float tax;
tax = calctax(gross);

cout<<"Taxes: $"<<tax<<endl;

//Net salary function call
float net;
net = calcnetsalary(gross, tax);

cout<<"Net salary: $"<<net<<endl;

}
//Gross pay function description
float calcgrosspay(int hours, float rate, float overtime){
	float gross;
	gross = (hours * rate )+ overtime;
	return gross;
}
//Taxes function description
float calctax(float gross){
	float tax;
	if (gross <= 600){
		tax = gross * 0.15;
	} else if (gross > 600){
		tax = (600 * 0.15) + ((gross - 600) * 0.20);
	}
	return tax;	
}

//Net sallary function description
float calcnetsalary( float gross, float tax){

	float net;
	net = gross - tax;
	return net;
}