/*
Description: program to compute the product of three 
initialized integers

Name: lawrence Odanga
Reg no: BCS-03-0052/2025
*/

#include<iostream>
using namespace std;

class addition{
	
	public:
// member variables		
		int a, b, c;
		
//member functions		
		int calcproduct(){
			return a* b * c;
		}
};

int main(){
//	
	addition prod;
	int product;
	
	prod.a = 22;
	prod.b = 30;
	prod.c = 50;
	product = prod.calcproduct();
	
	cout<<"The product is = "<<product<<endl;
	return 0;
}