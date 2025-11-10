//create 1d array.
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int i;
    float sum = 0;
    float average = 0;
    //create a file
    ofstream MyFile("/home/lawrence/Desktop/Programming Languages//array.txt");

    float gpa[5]={1.5,2.5,3.5,4.5,2.3};
  //print array elements using for loop 
    for(int i=0;i<5;i++){
        cout<<"GPA of student "<<i+1<<" is: "<<gpa[i]<<endl;
        MyFile << gpa[i] <<endl;
        sum += gpa[i];
        average = sum/5;
    }
    cout << "the sum is " <<sum<<endl;
    cout << "the average is " <<average<<endl;
    //3.0 write to file
    MyFile <<"The sum is "<<sum <<endl;
    MyFile << "The average is "<<average <<endl;

    //4.0 close the file
    MyFile.close();
    return 0;
}
