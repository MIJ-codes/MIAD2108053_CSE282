#include<iostream>
#include<bits/stdc++.h>

using namespace std;

struct node
{
    int data;
    node *next;

    node (int x)
    {
        data = x;
        next = nullptr;
    }
};
void count(node *head)
{
    int i = 1;
    while(head->next != 0)
    {
        i++;
        head = head->next;
    }
    cout<<"The length of the list is "<<i;
}
int main ()
{
    node *head = new node (5);
    node *n2 = new node (7);
    node *n3 = new node (8);

    head->next = n2;
    n2->next = n3;
    count(head);
}