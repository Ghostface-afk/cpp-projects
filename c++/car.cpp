#include <iostream>
using namespace std;

int main() {
    string car;
    float price;
    cout << "Welcome to Odanga Car Rentals. Which car would you like to choose: "<< endl;
    cin >> car ;

    if(car == "Mercedes"){
        cout << "Your price to pay is $4500"<< endl;
    }
    else if (car == "BMW")
    {
        cout << "Your price to pay is $6500"<< endl;
    }
    
    else if (car == "JEEP")
    { 
        cout << "Your price to pay is $2500"<< endl;
    }
    else if (car == "Audi")
    {
        cout << "Your price to pay is $3500"<< endl;
    }

    else {
        cout << "Sorry that car is not available"<< endl;
    }
    return 0;
}