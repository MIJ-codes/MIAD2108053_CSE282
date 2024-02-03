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

node* constructLL (int arr[], int arrsize)
{
    node *head = new node(arr[0]);
    node *current = head;

    for (int i = 1; i<arrsize; i++ )
    {
        node *temp = new node(arr[i]);
        current -> next = temp;
        current = temp;
    }
    return head;
}

void traverselist (node *head)
{
    while (head != nullptr)
    {
        cout<< head -> data<< " ";
        head = head -> next;
    }
}

int main ()
{
    int arr [8] = {2, 4, 6, 8};
    node *head = constructLL(arr, 4);
    traverselist(head);
}