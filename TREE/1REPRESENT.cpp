#include<iostream>
using namespace std;

struct node
{
    int data;
    node* left;
    node* right;
};
node* newnode(int data){
    node* element = new node();
    element->data = data;
    element->right = NULL;
    element->left = NULL;

    return element;

}

void print(node* root){

    while (root != NULL)
    {
        cout<<root->data<<" ";
        root = root->left;
    }
    
}

int main(){

    node* root = newnode(1);
    root->left = newnode(2);
    root->left->left = newnode(4);
    root->right = newnode(3);
    print(root);
}