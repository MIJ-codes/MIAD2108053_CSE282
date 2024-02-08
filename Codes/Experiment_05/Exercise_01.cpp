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

void traverse_preorder (node* root)
{
    if (root == nullptr)
    {
        return;
    }
    cout<< root -> data << " ";
    traverse_preorder (root -> left);
    traverse_preorder (root -> right);
}

void traverse_inorder (node* root)
{
    if (root == nullptr)
    {
        return;
    }
    traverse_inorder (root -> left);
    cout<< root -> data << " ";
    traverse_inorder (root -> right);
}

void traverse_postorder (node* root)
{
    if (root == nullptr)
    {
        return;
    }
    traverse_postorder (root -> left);
    traverse_postorder (root -> right);
    cout<< root -> data << " ";
}

int main ()
{
    node* t1root = new node (50);
    t1root -> left = new node (17);
    t1root -> right = new node (72);
    t1root -> left -> left = new node (12);
    t1root -> left -> right = new node (23);
    t1root -> left -> left -> left = new node (9);
    t1root -> left -> left -> right = new node (14);
    t1root -> right -> left = new node (54);
    t1root -> right -> right = new node (76);
    t1root -> right -> left -> right = new node (67);

    node* t2root = new node (1);
    t2root -> left = new node (3);
    t2root -> left -> left = new node (5);
    t2root -> left -> left -> right = new node (4);
    t2root -> left -> left -> right -> right = new node (11);
    t2root -> left -> right = new node (2);
    t2root -> left -> right -> left = new node (7);
    t2root -> left -> right -> left -> right = new node (9);
    t2root -> left -> right -> right = new node (8);
    t2root -> left -> right -> right -> right = new node (13);
    t2root -> left -> right -> right -> right -> right = new node (12);

    cout<< "For tree 1:" << endl;
    cout<< "Pre order traversing =";
    traverse_preorder (t1root);
    cout<< endl;
    cout<< "In order traversing =";
    traverse_inorder (t1root);
    cout<< endl;
    cout<< "Post order traversing =";
    traverse_postorder (t1root);
    cout<< endl;

    cout<< endl;
    
    cout<< "For tree 2:" << endl;
    cout<< "Pre order traversing =";
    traverse_preorder (t2root);
    cout<< endl;
    cout<< "In order traversing =";
    traverse_inorder (t2root);
    cout<< endl;
    cout<< "Post order traversing =";
    traverse_postorder (t2root);
    cout<< endl;
}