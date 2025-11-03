#include <iostream>
using namespace std;

class LoanProcessing{
    public:

    void processLoan(int amount){
       cout << "The loan is: " << amount << "." << endl;
    }
    void processLoan(double amount, double interestRate){
        cout << "The loan amount is: " << amount << ". The interest is: " << interestRate << "%." << endl;
    }
    void processLoan(string CustomerName,int amount, int duration){
        cout << "Customer Name: " << CustomerName << ". Loan Amount: " << amount  << ". Loan Duration: " << duration << " years." << endl;
    }
};

int main() {
    LoanProcessing lp;
    lp.processLoan(10000);
    lp.processLoan(15000.50, 5.5);
    lp.processLoan("John Doe", 20000, 10);


    return 0;
}