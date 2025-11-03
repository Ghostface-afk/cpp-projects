//name: lawrence odanga
//adm no: bcs-03-0052/2025
#include <iostream>
using namespace std;
class employee {
    private:
    string name;
    int salary;

    public:
    void setData(string n, int s) {
        name = n;
        salary = s;
}

    void getData() {
        cout << "Employee Name: " << name << endl;
        cout << "Employee Salary: " << salary << endl;
    }
};

int main(){
    employee emp1, emp2;
    emp1.setData("Loki", 500000);
    emp2.setData("Ulysses", 12000000);
    emp1.getData();
    emp2.getData();
    return 0;
}