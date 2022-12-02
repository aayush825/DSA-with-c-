#include <iostream>
#include <queue>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->right = NULL;
        this->left = NULL;
    }
};

node *buildtree(node *root)
{
    cout << "enter the data for node: " << endl;
    int data;
    cin >> data;

    // creating a node
    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }
    cout << "enter data for inserting in left " << data << endl;
    root->left = buildtree(root->left);
    cout << "enter data for inserting in right " << data << endl;
    root->right = buildtree(root->right);
    return root;
}

void inorder(node * &root, int &count) {
    //base case
    if(root == NULL) {
        return ;
    }

    inorder(root->left, count);
   	
    //leaf node
    if(root->left == NULL && root->right == NULL) {
        count++;
    }
    
    inorder(root->right, count);

}


int noOfLeafNodes(node * &root){
    int cnt = 0;
    inorder(root, cnt);
    return cnt;
}
/*
             1
           /   \
          3      5
        /  \    /  
       7   11  17  
*/

int main()
{
    node *root = NULL;

    // creating a tree
    root = buildtree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    int ans = noOfLeafNodes(root);

    cout<<"count"<<ans;
}