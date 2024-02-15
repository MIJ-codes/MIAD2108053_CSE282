//Print all the left and right childs

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

void child_print (node* root)
{
    vector < int > right_childs;
    vector < int > left_childs;

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

    cout<< "Left childs = ";
    for (int i = 0; i < left_childs . size (); i++)
    {
        cout << left_childs [i] << " ";
    }

    cout<< endl;

    cout<< "Right childs = ";
    for (int i = 0; i < right_childs . size (); i++)
    {
        cout << right_childs [i] << " ";
    }
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

    child_print (root);

    return 0;
}