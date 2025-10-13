//Lawrence Odanga
//Admission number: BCS-03-0052/2025
//Description: CAT2 - Library Management System using Inheritance

#include <iostream>
using namespace std;

class Person {
    protected:
        string name;
    
    public:
        void setName(string n){ // constructor
            name = n;
        }
        string getName(){
            return getName();
        }
};

class LibraryMember: public Person {
    private:
        int memberID;
    private:
        int booksBorrowed;
public:
LibraryMember(string n, int m, int b){ // constructor
    
        setName(n);
        memberID = m;
        booksBorrowed = b;
};

public:
        int getName(){
            cout << "Your name is " << getName() << endl;
            return getName();
        }

    int getMemberID(){
        cout << "Your ID number is "<< getMemberID() << endl;
        return memberID;
    }
    int getBooksBorrowed(){
        cout << "The total books borrowed is " << getBooksBorrowed() <<endl;
        return booksBorrowed;
    }
};
class PremiumMember:public LibraryMember {
    private: 
        double membershipFee;
        
public:
PremiumMember(string n, int m, int b,double memFee){
    membershipFee = memFee;
        int getMembershipFee(){
            cout << "Your membership fees are " << getMembershipFee() <<endl;
            return membershipFee;
        }
    }
};


int main()
{
//Creating an object for PremiumMember
PremiumMember userinfo("Lawrence Odanga",12345 ,12,1600);

cout<<"Member's name: "<<userinfo.getName()<<endl;
cout<<"Member's ID:"<<userinfo.getMemberID()<<endl;
cout<<"You have borrowed "<<userinfo.getBooksBorrowed()<<" books"<<endl;
cout<<"Your Membership Fee is:"<<userinfo.getMembershipFee()<<" shillings"<<endl;
return 0;
}