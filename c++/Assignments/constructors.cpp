//Name: Lawrence Odanga
//Adm Number :  BCS-03-0052/2025
//Description : This code is to demonstrate a constructor in a class

#include <iostream>
using namespace std;


    class car{
        public:
        string brand;
        string model;
        int year;

        car(string x, string y, int z){
            brand = x;
            model = y;
            year = z;
        }
        ~car(){
            cout << "Buy the cars now!" << endl;
        }
};

int main() {
    car CarObj1("BMW", " X6", 2015); //object
    car CarObj2("Mercedes", " C200", 2020);
    car CarObj3("Toyota", " probox", 2024);

    cout<<CarObj1.brand<<""<<CarObj1.model<<" "<<CarObj1.year<<endl;
    cout<<CarObj2.brand<<""<<CarObj2.model<<" "<<CarObj2.year<<endl;
    cout<<CarObj3.brand<<""<<CarObj3.model<<" "<<CarObj3.year<<endl;
    return 0;
}
