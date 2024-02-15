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

int maxDepth (node* root)
{
    if (root == NULL)
    { 
        return 0;
    }

    int lh = 1 + maxDepth (root -> left);
    if (lh == -1)
    {
        return -1;
    }

    int rh = 1 + maxDepth (root -> right);
    if (rh == -1)
    {
        return -1;
    }

    if (abs (lh - rh) > 1)   // Check for imbalanced condition
    {
        return -1;
    }

    return max (lh, rh);
}

bool isbalanced (node* root)
{
    // return 1 if true otherwise return 0
    return maxDepth (root) != -1;
}

int main()
{
    node* root = new node (1);
    root -> left = new node (2);
    root -> left -> left = new node (4);

    int h = isbalanced (root);

    if (h == 0)
    {
        cout<< "Tree in not balanced" << endl;
    }
    else
    {
        cout<< "Tree is balanced" << endl;
    }
}