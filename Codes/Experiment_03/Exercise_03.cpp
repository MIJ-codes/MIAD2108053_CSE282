#include<iostream>
#include<bits/stdc++.h>

using namespace std;

struct node
{
    int data;
    node *next;
    node *prev;

    node (int x)
    {
        data = x;
        next = nullptr;
        prev = nullptr;
    }

    node (int x, node *f, node *b)
    {
        data = x;
        next = f;
        prev = b;
    }
};

void screen (node *head)
{
    while(head != nullptr)
    {
        cout<< head -> data << " ";
        head = head -> next;
    }
}

node *create_dll (int arrsize)
{
    node *head = nullptr, *temp = nullptr, *prev = nullptr;
    int arr[arrsize];
    
    cout<<"List data = ";
    for (int i = 0; i < arrsize; i++)
    {
        cin>> arr[i]; 
    }

    head = new node (arr[0]);
    prev = head;

    for (int i = 1; i < arrsize; i++)
    {
        temp = new node (arr[i], nullptr, prev);
        prev -> next = temp;
        prev = temp;
    }
    return head;
}

node *insert_at_beginning (node *head, int value)
{
    node *newnode = new node (value);

    if (head == nullptr)
    {
        head = newnode;
    }
    else
    {
        newnode -> next = head;
        head -> prev = newnode;
        head = newnode;
    }
    return head;
}

int main ()
{
    int arrsize, value;
    cout<<"List size = ";
    cin>>arrsize;

    node *head = create_dll(arrsize);

    cout<<"Insert value = ";
    cin>>value;
    head = insert_at_beginning(head, value);

    cout<<"New list = ";
    screen(head);

    return 0;
}