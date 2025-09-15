/*
Name :Lawrence
Admission Number :BCS-03-0052/2025
Description : Program to calclate simple interest
*/
#include <iostream>

using namespace std;

// Function prototype
float s_interest;
float simple_interest(float principal, int rate, int time);

int main(){
    //function call
    s_interest = simple_interest(20000.0 , 5, 2);
    cout << "Simple Interest is: " << s_interest << endl;
    return 0;
}

//funtion definition
float simple_interest(float principal, int rate, int time){
    float interest;
    interest = principal * rate * time / 100;
    return interest;
}
