#include<bits/stdc++.h>
using namespace std;

class node {

public:
    int data;
    node* left;
    node* right;
    
};

node* newNode(int data)
{
    node* Node = new node();
    Node->data = data;
    Node->left = NULL;
    Node->right = NULL;
  
    return (Node);
}

int maxDepth(node* root) {
        if(root == NULL) return 0; 
        
        int lh = maxDepth(root->left); 
        int rh = maxDepth(root->right); 
        
        return 1 + max (lh, rh); 
    }
  
// Driver code
int main()
{
    node* root = newNode(1);
  
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
  
    cout << "Height of tree is " << maxDepth(root);
    return 0;
}
 