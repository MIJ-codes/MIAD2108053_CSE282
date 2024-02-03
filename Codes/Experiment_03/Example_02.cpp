#include<iostream>
#include<bits/stdc++.h>

using namespace std;

struct node
{
    int data;
    node *next;
    node *bak;

    node (int x)
    {
        data = x;
        next = nullptr;
        bak = nullptr;
    }

    node (int x, node *f, node *b)
    {
        data = x;
        next = f;
        bak = b;
    }
};

node *createdll (int arr[], int arrsize)
{
    node *head = nullptr, *temp = nullptr, *prev = nullptr;;

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

void screen (node *head)
{
    while(head != nullptr)
    {
        cout<< head -> data << " ";
        head = head -> next;
    }
}

int main ()
{
    int arrsize;
    cout<<"Array size =";
    cin>> arrsize;
    int arr[arrsize];

    for (int i = 0; i < arrsize; i++)
    {
        cin>> arr[i]; 
    }

    node *head = createdll(arr, arrsize);
    screen(head);
}