#include <iostream>

using namespace std;

float discount(float principal, int rate);
//float final_price;

int main(){
    float amount;
    float discount;
    float final_price;
    cout << "Enter purchase amount: ";
    cin >> amount;

    if(amount >= 5000){
        discount = amount * 0.1;
        final_price = amount- discount;
        cout << "Final price after discount: " << final_price << endl;
        cout << "Your discount is: " << discount << endl;
    }
    else if(amount >= 1000){
        discount = amount * 0.05;
        final_price = amount - discount;
        cout << "Final price after discount: " << final_price << endl;
        cout << "Your discount is: " << discount << endl;
    }
    else{
        cout<<"No discount applicable"<<endl;
    }
    return 0;
}

