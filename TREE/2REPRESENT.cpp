#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *left;
    struct node *right;

    node(int val){
        data = val;
        left = right = NULL;
    }
};


int main(){

    struct node* root = new node(1);
    root->left = new node(2);
    root->right = new node(2);
    root->left->right = new node(2);
}