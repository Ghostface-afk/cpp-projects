/*
name Lawrence
Adm no BCS-03-0052/2025
Description:
*/
#include <iostream>
using namespace std;

int main(){
   float amount;
   float discount;
   float finalprice;
   cout << "Enter amount of purchase: ";
   cin >> amount;
   
   if (amount<1000){
       cout << "No discount given.";
   }
   if (amount >1000 && amount<5000){
      cout << (discount = amount * 10/100) <<endl;
      cout << (finalprice = amount - discount)<<endl;
      cout<< "Discount given is "<<discount<< " and final price is "<< finalprice <<" shillings";
   }
   if (amount > 5000){
       cout << (discount = amount *20/100) <<endl;
       cout << (finalprice = amount - discount)<<endl;
       cout<< "Discount given is "<<discount<< " and final price is "<< finalprice <<" shillings";
   }
 
    return 0;
}