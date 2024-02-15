//Check if the tree is binary search tree or not

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

void store_inorder (node* root, vector < int >& inorder)
{
    if (root == nullptr)
    {
        return;
    }

    store_inorder (root -> left, inorder);
    inorder . push_back (root -> data);
    store_inorder (root -> right, inorder);
}

void is_BST (node* root)
{
    vector < int > inorder;
    bool result_is_BST = true;

    store_inorder (root, inorder);

    for (int i = 0; i < inorder.size () - 1; i++)
    {
        if (inorder[i] > inorder[i + 1])
        {
            result_is_BST = false;
            break;
        }
    }

    if (result_is_BST)
    {
        cout<< "Binary search tree.";
    }
    else
    {
        cout<< "Not a binary search tree.";
    }
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

    is_BST (root);

    return 0;
}
