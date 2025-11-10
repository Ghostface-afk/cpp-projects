/* 
Name: Elton Mwangi
Reg no: BSC-03-0112/2025
Description:Polymorphism Function overloading.
*/
#include <iostream>
using namespace std;
//class definition
class RestaurantOrder{
//Function overloading in the class
    public:
    void PlaceOrder(string itemName){
        cout<<"the name of the item is:"<<itemName<<endl;
    };
    void PlaceOrder(string itemName, int quantity){
        cout<<"The item is:"<<itemName<<"and the Quantity is:"<<quantity<<endl;
        };
        void PlaceOrder(string itemName, int quantity, bool takeout){
            cout<<"The item is:"<<itemName <<"the quantity is:"<<quantity<<"and the takeout order: "<<(takeout ? "yes"  :"No")<<endl;        
        };

};
//main function
int main(){
    RestaurantOrder Ro;
    Ro. PlaceOrder("Ugali");
    Ro. PlaceOrder("Githeri", 2);
    Ro. PlaceOrder("Pizza", 2, true );

    return 0;
}