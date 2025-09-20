#include <iostream>

using namespace std;

int number(int a, int b); // Function prototype


int main() {
    int num1, num2;
    cout << "Enter two numbers" << endl;
    cin >> num1 >> num2;
    
    int result = number(num1, num2); // Function call
    cout << "Larger number is: " << result << endl;

    if (num1 > num2){
        
        cout << num1 << " is larger.";
    }

    else{
        cout<< num2  << "is larger.";
    }

    return 0;
}