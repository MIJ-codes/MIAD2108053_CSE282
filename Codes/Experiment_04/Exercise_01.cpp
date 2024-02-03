#include<iostream>
#include<bits/stdc++.h>

using namespace std;

stack <int> stackinput (int stacksize)
{
    int a;
    stack <int> sumstack;
    cout << "Stack data = ";
    for (int i = 0; i < stacksize; i++)
    {
        cin>>a;
        sumstack.push (a);
    }
    return sumstack;
}

int summation (stack <int> sumstack)
{
    int sum = 0;
    while (!sumstack.empty ())
    {
        sum = sum + sumstack.top ();
        sumstack.pop ();
    }
    return sum;
}

int main ()
{
    stack <int> sumstack;
    int stacksize;

    cout<<"Stack size = ";
    cin>>stacksize;
    sumstack = stackinput(stacksize);
    int sum = summation (sumstack);
    cout << "Sum = "<<sum;
    return 0;
}