#include<iostream>
#include<bits/stdc++.h>

using namespace std;

struct node
{
    int data;
    node *next;

    node(int x)
    {
        data = x;
        next = nullptr;
    }
};

node* construct_sll(int arr[], int arrsize)
{
    node* head = new node (arr[0]);
    node* current = head;

    for (int i = 1; i<arrsize; i++)
    {
        node* temp = new node (arr[i]);
        current -> next = temp;
        current = temp;
    }
    return head;
}

node* traversing (node *head)
{
    while(head -> next != nullptr)
    {
        head = head -> next;
    }
    return(head);
}

void screen (node *head)
{
    while(head != nullptr)  //here (head -> next != nullptr) condition was applied but it was found that the next of the last new node is nullptr so the loop will not start and the function won't run resulting in not printing the last node
    {
        cout<< head -> data << " ";
        head = head -> next;
    }
}

void lastnodeadd (node *lastnode, node *add)
{
    lastnode -> next = add;
    add -> next = nullptr;
    return;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    node *listhead = construct_sll (arr, 5);
    node *lastnode = traversing (listhead);
    node *add = new node (6);
    lastnodeadd (lastnode,add);
    screen (listhead);
}

