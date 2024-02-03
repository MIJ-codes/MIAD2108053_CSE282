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

node *deleteKthnode (node *head, int k)
{
    node *temp = head, *prev = nullptr, *front = nullptr;
    int count = 0;
    while(temp != 0)
    {
        count++;
        if (count == k)
        {
            break;
        }
        prev = temp;
        temp = temp -> next;
    }
    front = temp -> next;
    prev -> next = front;
    delete temp;
    return head;
}

void screen (node *head)
{
    while (head != 0)
    {
        cout<< head -> data<<" ";
        head = head -> next;
    }
    cout<<endl;
}

int main()
{
    node *head = new node (5);
    node *n2 = new node (6);
    node *n3 = new node (7);
    node *n4 = new node (8);
    node *n5 = new node (9);

    head -> next = n2;
    n2 -> next = n3;
    n3 -> next = n4;
    n4 -> next = n5;
    
    screen(head);

    head = deleteKthnode(head, 3);

    screen(head);
}
