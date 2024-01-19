#include<iostream>
#include<stdlib.h>
#include<bits/stdc++.h>

using namespace std;

     struct node 
     {
        int data;
        node *next;
     };

     int main()
     {
        node *a = NULL, *b = NULL, *c = NULL;

        a = (node*) malloc(sizeof(node));
        b = (node*) malloc(sizeof(node));
        c = (node*) malloc(sizeof(node));

        a -> data = 10;
        b -> data = 20;
        c -> data = 30;

        a -> next = b;
        b -> next = c;
        c -> next = NULL;

        node *head = a;
        while (head != NULL)
        {
        cout<<head -> data<<" ";
        head = head -> next;
        }
     }
