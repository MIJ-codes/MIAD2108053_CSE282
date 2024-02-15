//Calculate maximum depth

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

int max_depth (node* root)
{
    if (root == nullptr)
    {
        return 0;
    }

    int left_height = max_depth (root -> left);
    int right_height = max_depth (root -> right);
    return 1 + max (left_height , right_height);
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

    int height = max_depth (root);

    cout<< "Height = " << height << endl;

    return 0;
}
