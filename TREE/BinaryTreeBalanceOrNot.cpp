#include<bits/stdc++.h>
using namespace std;
/*
class Solution {

public:
    bool isBalanced(TreeNode* root) {
        return dfsHeight (root) != -1;
    }

    int dfsHeight (TreeNode *root) {

        if (root == NULL) return 0;
        
        int leftHeight = dfsHeight (root -> left);

        if (leftHeight == -1) 
            return -1;
        
        int rightHeight = dfsHeight (root -> right);

        if (rightHeight == -1) 
            return -1;
        
        if (abs(leftHeight - rightHeight) > 1)  
            return -1;

        return max (leftHeight, rightHeight) + 1;
    }
};

*/

struct Node{

    int data;
    struct Node* left;
    struct Node* right;

    Node(int d){
        data=d;
        left = right = NULL;
    }
};
int isBalanced(Node* root){
    if(root == NULL)
        return 0;

    int lh = isBalanced(root->left);
    if(lh == -1)
        return -1;
    int rh = isBalanced(root->right);
    if(rh == -1)
        return -1;

    if(abs(lh - rh)>1)
        return -1;
    else
        return max (lh,rh)+1;        
                
}

int main(){

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(30);
    root->right->left = new Node(15);
    root->right->right = new Node(20);
    root->right->right->right = new Node(20);
    root->right->right->right->right = new Node(20);
 

    if(isBalanced(root)>0)
        cout<<"balanced";

    else
        cout<<"not balanced";

    return 0;        
}