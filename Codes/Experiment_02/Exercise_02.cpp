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
    node *head,*current, *temp;
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

void counting (node *head)
{
    int i = 0;
    while(head != nullptr)
    {
        i++;
        head = head -> next;
    }
    cout<< "Counted elements = "<<i;
}

int main()
{
    int nodesize;
    cout<< "Node size = ";
    cin>> nodesize;

    node *head = construct_sll(nodesize);
    counting(head);
}
