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
        cout<<"List data = ";
        for (int i = 0; i < nodesize; i++)
        {
            cin>> arr[i];
            if (i == 0)
            {
                head = new node (arr[i]);
                current = head; 
            }
            temp = new node (arr[i]);
            current -> next = temp;
            current = temp;
        }
    }
    return head;
}

int findposition(node *head, int target)
{
    node *current = head;
    int position = 0;
    while (current != nullptr)
    {
        if (current -> data == target)
        {
            return position;
            break;
        }
        current = current -> next;
        position++;
    }
    return -1;
}

int main()
{
    int nodesize, target, position;
    node *head;

    cout<<"List size = ";
    cin>> nodesize;

    head = construct_sll(nodesize);

    cout<<"Target data = ";
    cin>>target;
    position = findposition(head, target);

    if (position != -1)
    {
        cout<<"Position = "<<position;
    }
    else 
    {
        cout<<"Data not found.";
    }
    return 0;
}