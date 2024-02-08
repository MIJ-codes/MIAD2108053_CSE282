#include <bits/stdc++.h>

using namespace std;

struct node
{
    int data;
    node *left;  // Left reference ptr to the node.
    node *right; // Right reference ptr to the node.
    
    // Method to initialize the above values.
    node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
}