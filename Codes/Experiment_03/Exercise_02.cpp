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

void screen (node *head)
{
    while(head != nullptr)
    {
        cout<< head -> data << " ";
        head = head -> next;
    }
}

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

node *insert_kth_position (node * head, int k, node *newnode)
{
    int i = 1;
    node *current = head;
    while (i < k-1)
    {
        if (k-1 == 1)
        {
            break;
        }
        current = current -> next;
        i++;
    }
    node *temp;
    temp = current -> next;
    current -> next = newnode;
    newnode -> next = temp;
    return head;
}

int main ()
{
    int arrsize, k, data;
    cout<<"List size = ";
    cin>>arrsize;

    node *head = construct_sll(arrsize);

    cout<<"Inserting Position = ";
    cin>>k;
    cout<<"New data = ";
    cin>>data;
    node *newnode = new node (data);
    head = insert_kth_position(head, k, newnode);
    cout<<"New list = ";
    screen(head);
    return 0;
}