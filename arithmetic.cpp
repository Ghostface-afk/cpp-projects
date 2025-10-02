#include <iostream>

int main(){
int students = 20;

//students = students +1;
students+=1;
//students++; //using the increment operator

int teachers = 5;
//teachers--; //using the decrement operator
//teachers-= 1; //using the shorthand operator
teachers = teachers -1;

std::cout << "Number of teachers: " << teachers << std::endl;
std::cout << "Number of students: " << students << std::endl;
return 0;
}