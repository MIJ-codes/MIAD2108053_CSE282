#include<iostream>
#include<bits/stdc++.h>

using namespace std;

stack <int> stackinput (int stacksize)
{
    int a;
    stack <int> factstack;
    cout << "Stack data = ";
    for (int i = 0; i < stacksize; i++)
    {
        cin>>a;
        factstack.push (a);
    }
    return factstack;
}

int factorial(int data)
{
    int factorial = 1;
    if (data == 0)
    {
        return factorial;
    }
    else
    {
        for (int i = 1; i <= data; i++)
        {
            factorial = factorial * i;
        }
        return factorial;
    }
}

int main ()
{
    int stacksize;

    cout<< "Stack size = ";
    cin>>stacksize;
    stack <int> factstack = stackinput (stacksize); //a single stack to take the data input
    
    stack <int> fact[stacksize]; //multiple stacks to take factorials

    while (!factstack.empty ())
    {
        int data = factstack.top (); 
        fact[data].push (factorial (data)); //stack of the index same as data to take factorial
        factstack.pop ();
    }

    for (int i = 0; i < stacksize; i++)
    {
        cout<< "Factorial : "<< i << " = " << fact[i].top ()<< endl; //print the factorial of each of those individual stack
    }

    return 0;
}