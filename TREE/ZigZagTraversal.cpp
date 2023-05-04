#include<bits/stdc++.h>
using namespace std;

class solution{
public:
vector<vector<int>>zigzag(TreeNode* root){
    vector<vector<int>> result;
    if(root==NULL)
         return result;

    queue<TreeNode*>nodesQueue;
    nodesQueue.push(root);
    bool leftToright = true;

    while(!nodesQueue.empty()){
        int size = nodesQueue.size();
        vector<int>row(size);
        for(int i=0;i<size;i++){
            TreeNode* node = nodesQueue.front();
            nodesQueue.pop();

            int index = (leftToright)?i:(size-1-i);

            row[index] = node->val;
            if(node->left){
                nodesQueue.push(node->left);
            }
            if(node->right){
                nodesQueue.push(node->right)
            }
        }
        leftToright = !leftToright;
        result.push_back(row);
    }
    return result;
}

};