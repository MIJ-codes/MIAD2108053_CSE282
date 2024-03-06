#include<bits/stdc++.h>

using namespace std;

struct node
{
    int data;
    node* left;
    node* right;
    
    node(int val)
    {
        data = val;
        left = right = nullptr;
    }
};

void store_inorder(node* root, vector <int> & inorder)
{
    if (root == nullptr)
    {
        return;
    }

    store_inorder(root -> left, inorder);
    if (root -> left == nullptr && root -> right == nullptr)
    {
        inorder.push_back(root -> data);
    }
    store_inorder(root -> right, inorder);
}

int leaf(node* root)
{
    vector <int> inorder;
    int leaf_sum = 0;

    store_inorder(root, inorder);

    cout << "Leaf nodes = ";
    for (int i = 0; i < inorder.size(); i++)
    {
        cout << inorder[i] << " ";
        leaf_sum = leaf_sum + inorder[i];
    }

    return leaf_sum;
}

int main()
{
    node* root = new node(50);
    root->left = new node(17);
    root->right = new node(72);
    root->left->left = new node(12);
    root->left->right = new node(23);
    root->right->left = new node(54);
    root->right->right = new node(76);
    root->left->left->left = new node(9);
    root->left->left->right = new node(14);
    root->left->right->right = new node(19);
    root->right->left->right = new node(67);

    int leaf_sum = leaf(root);
    cout << "The sum of the leaf nodes is = " << leaf_sum;

    return 0;
}
