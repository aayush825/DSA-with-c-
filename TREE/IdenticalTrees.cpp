#include <bits/stdc++.h>
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
int identicaltrees(node* a,node* b)
{
    if(a == NULL && b == NULL)
        return 1;

    if(a!= NULL && b!= NULL){
        return(a->data == b->data && identicaltrees(a->left,b->left));
    }    
    return 0;
}
int main(){

    node* root1 = newNode(1);
    root1->left = newNode(2);
    root1->right = newNode(3);
    root1->left->left = newNode(4);
    root1->left->right = newNode(5);

    node* root2 = newNode(1);
      root2->left = newNode(2);
    root2->right = newNode(3);
    root2->left->left = newNode(4);
    root2->left->right = newNode(5);

    if(identicaltrees(root1,root2))
        cout<<"both trees are identical";
    else
        cout<<"trees are not identical";

    return 0;        
}