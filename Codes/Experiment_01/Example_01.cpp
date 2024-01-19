#include<iostream>
#include <string>
using namespace std;
// create struct with person1 variable
struct Person {
string name;
int citNo;
float salary;
} person1;
int main() {
// assign value to name of person1
getline(cin, person1.name);
//strcpy(person1.name, "Ronaldo");
// assign values to other person1 variables
person1.citNo = 1985;
person1. salary = 2500;
// print struct variables
cout<<"Name: "<< person1.name<<endl;
cout<<"Citizenship No.: "<< person1.citNo<<endl;
cout<<"Salary: "<< person1.salary;
return 0;
}