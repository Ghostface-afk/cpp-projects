#include <iostream>
using namespace std;

//Base Class
class AccountHolder {
    protected:
        string name;

    public:
    void setName(string n) {
        name = n;
    }
    string getName() {
        return name;
    }
};

//Derived Class
class BankAccount : public AccountHolder {
    private:
        int AccountNumber;
        double balance;
    
    public:
        BankAccount(string n,int accNum, double bal) {
             AccountNumber = accNum;
             balance = bal;
             name = n; // Accessing protected member from base class
}
    public:
     int getAccNum(){
        return AccountNumber;
     }
     double getbal(){
        return balance;
    }
};

class SavingsAccount : public BankAccount {
    private:
    double interestRate;
    
   public: 
   SavingsAccount(string n, int AccNum, double bal, double rate) : BankAccount(n, AccNum, bal){
        interestRate = rate;
   }
    
    double getInterestRate(){
        return interestRate;
    }
    
};

int main() {

    AccountHolder ah;
    ah.setName("Leroy Valdez");
    ah.getName();

    BankAccount ba("Leroy Valdez", 123456, 1000.50);
    cout << "Account Holder: " << ba.getName() << endl;
    cout << "Account Number: " << ba.getAccNum() << endl;
    cout << "Balance: $" << ba.getbal() << endl;

    SavingsAccount sa("Leroy Valdez", 123456, 1000.50, 0.05);
    cout << "Account Holder: " << sa.getName() << endl;
    cout << "Account Number: " << sa.getAccNum() << endl;
    cout << "Balance: $" << sa.getbal() << endl;
    cout << "Interest Rate: " << sa.getInterestRate() * 100 << "%" << endl; 
    return 0;
}
