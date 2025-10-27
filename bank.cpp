#include <iostream>
using namespace std;

class bankaccount{
    private:
    string name;
    double balance;
    
    protected:
    int accountnumber;

    public:
    void setData(string n, float bal, int accNum){
        name = n;
        balance = bal;
        accountnumber = accNum;
    }

    void getData(){
        cout<<"User Details"<<endl;
        cout<<"Your name is: "<< name << endl;
        cout<<"Your account balance is: "<< balance << endl;
        cout<<"Your Account Number is: "<< accountnumber <<endl;
    }
};

int main(){
    bankaccount acc1;
    acc1.setData("Naomi", 250000, 123456789);
    acc1.getData();
return 0;
}