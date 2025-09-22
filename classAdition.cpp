/*
Name: Lawrence
REg No: BCs-03-0052/20255
Description: class ADITION
*/

#include <iostream> 
using namespace std;

class addition{
    public:
    int a;
    int b;
    int c;

    int calculateProduct(){
        return a * b * c;
    }
};

int main(){
    addition add1;
    int product;

    add1.a = 22;
    add1.b = 30;
    add1.c = 50;

    product = add1.calculateProduct();

    cout << "The product of the numbers is : " << product << endl;

    return 0;
}