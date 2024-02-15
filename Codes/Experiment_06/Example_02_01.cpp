//Find if the tree is perfect or not using boolien

#include<bits/stdc++.h>

using namespace std;

struct node
{
    int data;
    node* left;
    node* right;

    node (int value)
    {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

bool is_perfect_tree (node* root)
{
    if (root == nullptr)
    {
        return 0;
    }

    int left_height = 1 + is_perfect_tree (root -> left);
    int right_height = 1 + is_perfect_tree (root -> right);

    if (left_height == right_height)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main ()
{
    node* root = new node (1);
    root -> left = new node (2);
    root -> right = new node (3);
    root -> left -> left = new node (4);
    root -> left -> right = new node (5);
    root -> right -> left = new node (6);
    root -> right -> right = new node (7);
    root -> left -> left -> left = new node (9);

    bool decision = is_perfect_tree (root);
    
    if (decision == 1)
    {
        cout<< "Perfect tree";
    }
    else
    {
        cout<< "Not a perfect tree";
    }

    return 0;
}
