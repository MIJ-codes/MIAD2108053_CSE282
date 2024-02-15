//Find if the tree is perfect or not using the heights

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

struct height
{
    int left_height;
    int right_height;
};

height is_perfect_tree (node* root)
{
    height depth;

    if (root == nullptr)
    {
        depth.left_height = depth.right_height = 0;
        return depth;
    }

    height left_depth = is_perfect_tree (root->left);    //of left_depth where is it storing the values? in left_height or right_height
    height right_depth = is_perfect_tree (root->right);   ////of right_depth where is it storing the values? in left_height or right_height

    depth.left_height = 1 + max (left_depth.left_height, left_depth.right_height);    //what happened here?
    depth.right_height = 1 + max (right_depth.left_height, right_depth.right_height);  //what happened here?

    return depth;
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

    height tree_heights = is_perfect_tree(root);
    
    if (tree_heights.left_height == tree_heights.right_height)
    {
        cout<< tree_heights.left_height << "=" << tree_heights.right_height << endl << "Perfect tree";
    }
    else
    {
        cout<< tree_heights.left_height << "!=" << tree_heights.right_height << endl << "Not a perfect tree";
    }

    return 0;
}

