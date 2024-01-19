// A c++ program to substract two complex numbers.

#include<iostream>
using namespace std;

struct complex
{
    float real,img;

}c1,c2,c3;

complex takecomplex()

{
    struct complex c;
    cout<<"a=";
    cin>>c.real;
    cout<<"b=";
    cin>>c.img;

    cout<<endl;

    return c;

}

void subcomplex(complex c1,complex c2)
{
    c3.real=c1.real-c2.real;
    c3.img=c1.img-c2.img;

    if(c3.img>=0)
    {
        cout<<"Result:"<<c3.real<<"+"<<c3.img<<"i"<<endl;

    }
    else
    {
        cout<<"Result:"<<c3.real<<c3.img<<"i"<<endl;
    }
}

int main()
{
    cout<<"Enter the 1st complex number as a+ib"<<endl;
    c1=takecomplex();
    cout<<"Enter the 2nd complex number as a+ib"<<endl;
    c2=takecomplex();

    subcomplex(c1,c2);

    return 0;



}
