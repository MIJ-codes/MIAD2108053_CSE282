// Introduction to structure in c++.

#include<iostream>
#include<string.h>
using namespace std;

struct Person
{
    string name;
    int citNo;
    float salary;
} person1;

int main()
{
    cout<<"Enter name:"<<endl;
    getline(cin,person1.name);

    person1.citNo=1985;
    person1.salary=300000;

    cout<<"Name: "<<person1.name<<endl;
    cout<<"Citizenship No.:"<<person1.citNo<<endl;
    cout<<"Salary: "<<person1.salary;
}

