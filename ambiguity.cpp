//name: lawrence odanga
//adm no: bcs-03-0052/2025
#include <iostream>
using namespace std;

class A {

public:
    void name() {
       cout<<"A \n";
    }
};

class B1: virtual public A {};

class B2: virtual public A {};

class B3: public A {
    public:
    void name() {
       cout<<"B3 \n";
    }
};

 class D: public B1 ,public B2, public B3 {};

int main() {
    D d;
    B1& b1 =d;
    b1.name();  //single copy of A in B1 via virtual inheritance

    B3& b3 =d;
    b3.name();  //  overriding A.name()

    return 0;
}