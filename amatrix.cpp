//create 2d array.
#include <iostream>
#include <fstream>

using namespace std;
int main() {
    int i,j;
    //int sum = 0;
    //float average = 0;
    //create a file
    ofstream MyFile("/home/lawrence/Desktop/Programming Languages//array.txt");

    int gpa[2][3]={
        {20,30,40},
        {35,10,90}
    };

  //print array elements using for loop 
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            cout << gpa[i][j] << "\t" ;
            MyFile << gpa[i][j] << "\t";
        }
        cout<<endl;
        MyFile<<endl;
    }

    cout <<"printed successfully"<<endl;
    MyFile << "printed successfully"<<endl;

    MyFile.close();
    return 0;
} 
