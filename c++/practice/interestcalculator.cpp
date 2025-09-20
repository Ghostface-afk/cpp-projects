/*
Name :Lawrence
Admission Number :BCS-03-0052/2025
Description : THIS IS PRACTISE CHECK THE OTHER ONE.
*/
#include <iostream>

using namespace std;

// Function prototype
float s_interest;
float discount(float principal);
float simple_interest(float principal, int rate, int time);

int main(){
    //function call
    float principal;
    float final_price;
    cout << "Enter principal amount: ";
    cin >> principal;

    int rate;
    cout << "Enter rate of interest: ";
    cin >> rate;

    int time;
    cout << "Enter time: ";
    cin >> time;

    s_interest = simple_interest(principal, rate, time);
    cout << "Simple Interest is: " << s_interest << endl;

     // Call discount function
     
    float disc = discount(principal);
    cout << "Discount offered is: " << disc << endl;

    return 0;
}


//funtion definition
float simple_interest(float principal, int rate, int time){
    float simple_interest;
    simple_interest = principal * rate/100 * time;
    return simple_interest;
}

//discount 
float discount(float principal){

   float disc = 0.0, final_price = principal;
     if(principal >= 5000){
        disc = principal * 0.1;
        final_price = principal - disc;
    }
    else if(principal >= 1000){
        disc = principal * 0.05;
        final_price = principal - disc;
    }
    else{
        cout<<"No discount applicable"<<endl;
    }

     cout << "Final price after discount: " << final_price << endl;

     return disc;

     }