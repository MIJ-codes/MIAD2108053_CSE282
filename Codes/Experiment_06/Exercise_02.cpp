//Check if the tree is balanced or not

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

int is_balanced (node* root)
{
    int left_height, right_height;

    if (root == nullptr)
    {
        return 0;
    }

    left_height = is_balanced (root -> left);
    right_height = is_balanced (root -> right);

    if (abs(left_height - right_height) > 1 || left_height == -1 || right_height == -1)
    {
        return -1;
    }
    return 1 + max (left_height , right_height);
}

int main ()
{
    node* root = new node (50);
    root -> left = new node (17);
    root -> right = new node (72);
    root -> left -> left = new node (12);
    root -> left -> right = new node (23);
    root -> left -> left -> left = new node (9);
    root -> left -> left -> right = new node (14);
    root -> left -> right -> right = new node (19);
    root -> right -> left = new node (54);
    root -> right -> right = new node (76);
    root -> right -> left -> right = new node (67);

    if (is_balanced (root) == -1)
    {
        cout<< "Not balanced.";
    }
    else
    {
        cout<< "Balanced.";
    }

    return 0;
}
