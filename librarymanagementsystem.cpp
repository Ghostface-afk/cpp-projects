//name: lawrence odanga
//adm no: bcs-03-0052/2025
#include <iostream>
using namespace std;

// Base class
class Person {
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

// Derived class 1
class LibraryMember : public Person {
private:
    int memberID;
    int booksBorrowed;

public:
    LibraryMember(string n, int m, int b) {
        setName(n);
        memberID = m;
        booksBorrowed = b;
    }

    int getMemberID() {
        return memberID;
    }

    int getBooksBorrowed() {
        return booksBorrowed;
    }
};

// Derived class 2
class PremiumMember : public LibraryMember {
private:
    double membershipFee;

public:
    PremiumMember(string n, int m, int b, double fee)
        : LibraryMember(n, m, b)  // Initialize base class
    {
        membershipFee = fee;
    }

    double getMembershipFee() {
        return membershipFee;
    }
};

int main() {
    // Creating an object for PremiumMember
    PremiumMember userinfo("Lawrence Odanga", 12345, 12, 1600);

    cout << "Member's Name: " << userinfo.getName() << endl;
    cout << "Member's ID: " << userinfo.getMemberID() << endl;
    cout << "Books Borrowed: " << userinfo.getBooksBorrowed() << endl;
    cout << "Membership Fee: " << userinfo.getMembershipFee() << " shillings" << endl;

    return 0;
}
