
//Member variables and member functions in C++

#include <iostream>
using namespace std;

class Student {
public:
    string name;   // member variable (string type)
    int age;       // member variable (int type)
    float grade;   // member variable (float type)

    void displayInfo() {  // member function
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main() {
    Student s1; // create object

    // assigning values to member variables
    s1.name = "Alice";
    s1.age = 21;
    s1.grade = 88.5;

    s1.displayInfo();
    return 0;
}
