// max(diameter, lh + rh+1)
#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;
};

int diameterOfBinaryTree(node *root)
{
    int diameter = 0;
    height(root,diameter);
    return diameter;
}

int height(node *node, int &diameter)
{

    if (!node)
    {
        return 0;
    }

    int lh = height(node->left, diameter);
    int rh = height(node->right, diameter);

    diameter = max(diameter, lh + rh);

    return 1 + max(lh, rh);
}

node* newNode(int data)
{
    node *Node = new node();
    Node->data = data;
    Node->left = NULL;
    Node->right = NULL;

    return (Node);
}

int main()
{
    node *root = newNode(1);

    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    cout << "Height of tree is " << diameterOfBinaryTree(root);
    return 0;
}

