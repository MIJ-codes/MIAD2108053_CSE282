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

node *construct_sll(int nodesize)
{
    node *head, *current, *temp;
    if (nodesize == 0)
    {
        return 0;
    }
    else
    {
        int arr[nodesize];
        cout<< "Node data = ";
        for (int i = 0; i<nodesize; i++)
        {
            cin>> arr[i];
            if (i == 0)
            {
                head = new node (arr[0]);
                current = head;
            }
            else
            {
                temp = new node (arr[i]);
                current -> next = temp;
                current = temp;
            }
        }
    }
    return head;
}

node *lastnodeadd (node *head, node *add) 
{
    if (head  == nullptr)
    {
        head = add;
    }
    else
    {
        node *current = head;
        while(current -> next != nullptr)
        {
            current = current -> next;
        }
        current -> next = add;
        add -> next = nullptr;
    }
    return head;                //here the function was set to be void, if there were other elements in the list it worked as the head didn't change but for a empty list the head changed and it didn't return the new head caussing an error.
}

void screen (node *head)
{
    cout<<"Linked list =";
    while(head != nullptr)
    {
        cout<< head -> data << " ";
        head = head -> next;
    }
}

int main()
{
    int adddata, nodesize;
    node *head, *add;

    cout<< "Node size = ";
    cin>> nodesize;
    head = construct_sll (nodesize);

    cout<< "New node data = ";
    cin>> adddata;
    add = new node (adddata);
    head = lastnodeadd (head, add);
    screen (head);
}