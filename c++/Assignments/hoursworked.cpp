//Name: Lawrence Odanga

//Adm Number :  BCS-03-0052/2025

/*Description : This code is to calculate Gross pay,
                Net pay, and Taxes, all derived from 
                hourly_rate and hours worked */

#include <iostream>

using namespace std;

float calculate_gross_pay( int hours, float hourly_rate);

float calculate_taxes(float gross_pay);

int main(){
    float hourly_rate;
    int hours;

    cout <<"Enter hours worked: " <<endl;
    cin >> hours;
    cout << "Enter Hourly pay: " <<endl;
    cin >> hourly_rate;

    //Calculate gross pay
    float gross = calculate_gross_pay(hours, hourly_rate);
    
    //calculate taxes
    float taxes = calculate_taxes(gross);

    //calculate net_pay
    float net_pay =gross - taxes;

    cout << "Your gross pay is: " << gross << endl;
    cout << "taxes paid: " <<  taxes << endl;
    cout << "Your net pay: "<< net_pay << endl;

    return 0;
}
//function to calculate gross_pay
float calculate_gross_pay( int hours, float hourly_rate){
int overtime_hours; // hours exceeded
float gross_pay;
float overtime;

if (hours >40){
    overtime_hours = hours - 40;
    overtime = overtime_hours * (hourly_rate * 1.5);
    gross_pay = (40 * hourly_rate) + overtime;
} else{
    gross_pay = hours * hourly_rate;
}
return gross_pay;
}

//calculate taxes
float calculate_taxes(float gross_pay){
    float taxes;
    if (gross_pay <=600){
        taxes = gross_pay * 0.15;   
    } else {
        taxes = (600 *0.15) + ((gross_pay - 600) * 0.20);
    }
    return taxes;
}

