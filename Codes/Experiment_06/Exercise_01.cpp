//Calculate maximum height

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

int max_height (node* root)
{
    if (root == nullptr)
    {
        return 0;
    }

    int left_height = max_height (root -> left);
    int right_height = max_height (root -> right);
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

    int height = max_height (root);
    cout<< "Height = " << height << endl;

    return 0;
}
