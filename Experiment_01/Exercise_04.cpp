// a C++ program to add two distances in inch-feet using structure.

#include<iostream>
using namespace std;

struct distance
{
    float inch;
    int feet;
}d1,d2,result;

int main()
{
   cout<<"Enter 1st distance:"<<endl;
   cout<<"Feet:";
   cin>>d1.feet;
   cout<<"Inch:";
   cin>>d1.inch;

   cout<<"\nEnter 2nd distance:"<<endl;
   cout<<"Feet:";
   cin>>d2.feet;
   cout<<"Inch:";
   cin>>d2.inch;

   result.feet=d1.feet+d2.feet;
   result.inch=d1.inch+d2.inch;

   if(result.inch>=12)
   {
       result.inch=result.inch-12;
       result.feet++;
   }

   cout<<"\n Sum of distances="<<result.feet<<" feet "<<result.inch<<" inch"<<endl;
}
