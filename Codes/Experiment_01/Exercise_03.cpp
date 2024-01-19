/*Enter the marks of 5 students in Chemistry, Mathematics, and Physics
(each out of 100) using a structure named Marks having elements roll no.,
name, chem_marks, maths_marks, and phy_marks and then display the
percentage of each student.*/

#include<iostream>
using namespace std;
 struct Marks
 {
     int roll;
     string name;
     float chem,math,phy;
 }student[6];

 int main()
 {
     for(int i=1;i<=5;i++)
     {

         cout<<"Roll No.:";
         cin>>student[i].roll;

         cout<<"Enter name:";
         cin.ignore();
         getline(cin,student[i].name);


         cout<<"Chemistry marks:";
         cin>>student[i].chem;

         cout<<"Mathematics marks:";
         cin>>student[i].math;

         cout<<"Physics marks:";
         cin>>student[i].phy;
         cout<<endl;
         cout<<endl;
     }

     for(int i=1;i<=5;i++)
     {
         cout<<"Name:"<<student[i].name<<endl;
         cout<<"Roll No."<<student[i].roll<<endl;
         int p=(student[i].math+student[i].phy+student[i].chem)/3;
         cout<<"Percentage: "<<p<<endl;
         cout<<endl;

     }
 }
