 /*a C++ program to store and print the roll no., name, age, and marks
of a student using structures.*/

#include<iostream>
using namespace std;

struct student
{
    string name;
    int roll;
    int age;
    float marks;
};

int main()
{
    student s;
    cout<<"Enter name: ";
   getline(cin,s.name);

    cout<<"Enter roll number: ";
    cin>>s.roll;

    cout<<"Enter age:";
    cin>>s.age;

    cout<<"Enter marks:";
    cin>>s.marks;

    cout<<"\n Displaying information:"<<endl;
    cout<<"Name:"<<s.name<<endl;
    cout<<"Roll:"<<s.roll<<endl;
    cout<<"Marks:"<<s.marks<<endl;
    return 0;

}
