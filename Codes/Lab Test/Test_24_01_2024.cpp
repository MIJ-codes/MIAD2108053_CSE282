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
    node *head, *temp, *prev;
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

node *delete_last_node(node *head)
{
    node *current, *temp;

    current = head;
    while (current -> next != nullptr)
    {
        temp = current;
        current = current -> next;
    }
    temp -> next = nullptr;
    return head;
}

int main()
{
    int arrsize;
    cout<<"List size = ";
    cin>> arrsize;

    node *head = create_dll(arrsize);
    head = delete_last_node(head);
    
    cout<<"New list = ";
    screen(head);

    return 0;
}