/*a C++ program to store roll no. (starting from 1), name and age of
5 students and then print the details of the student with roll no. 2.*/

#include<iostream>
using namespace std;

struct info
{
    string name;
    int roll_no;
    int age;
} student [6];//5 cant be used.

int main ()
{
    for(int i=1; i <= 5; i++)
    {
        cout << "Roll No.: ";
        cin >> student[i].roll_no;
        cout << "Name: ";
          cin.ignore();// it should be use before getline

        getline(cin, student[i].name);
        cout << "Age: ";
        cin >> student[i].age;
        cout<<endl;
    }
    cout << "Details of Roll No.- 2: " << endl;
    cout << "Name: " << student[2].name << endl;
    cout << "Roll No.: " << student[2].roll_no << endl;
    cout << "Age: " << student[2].age << endl;

    return 0;
}
