//Sum of all the left and right childs

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

void sum_child (node* root)
{
    vector < int > right_childs;
    vector < int > left_childs;
    int sum_left = 0, sum_right = 0;

    if (root == NULL)
    {
        cout << "Tree is Empty." << endl;
    }

    queue < node* > q;
    q . push (root);

    while (!q . empty ())
    {
        node* temp = q . front ();
        q . pop ();

        if (temp -> left != NULL)
        {
            q . push (temp -> left);
            left_childs . push_back ( temp -> left -> data);
        }

        if (temp -> right != NULL)
        {
            q . push (temp -> right);
            right_childs . push_back ( temp -> right -> data);
        }
    }

    cout<< "Sum of left childs = ";
    for (int i = 0; i < left_childs . size (); i++)
    {
        sum_left = sum_left + left_childs[i];
    }
    cout << sum_left << " ";

    cout<< endl;

    cout<< "Sum of right childs = ";
    for (int i = 0; i < right_childs . size (); i++)
    {
        sum_right = sum_right + right_childs[i];
    }
    cout << sum_right << " ";
}

int main()
{
    node* root = new node (1);
    root -> left = new node (2);
    root -> right = new node (3);
    root -> left -> left = new node (4);
    root -> left -> right = new node (5);
    root -> right -> left = new node (6);
    root -> right -> right = new node (7);

    sum_child (root);

    return 0;
}