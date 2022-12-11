//tc -- o(n)

int countnodes(struct node* root){
    if(root == NULL)
      return 0;

    int ans = 1+ countnodes(root->left)+countnodes(root->right);
    return ans;
}
bool isCBT(struct node* root,int index,int cnt){
    if(root == NULL)
      return true;

    if(index>= cnt)
        return false;

    else{
        bool left = isCBT(root->left,2*index+1,cnt);
        bool right = isCBT(root->right,2*index+2,cnt);
        return (left && right);
    }      
}
bool ismaxorder(struct node* root){
    if(root->left == NULL && root->right == NULL)
       return true;

    if(root->right == NULL)
    {
        return(root->data > root->right->data)
    }   
    else{
        bool left = ismaxorder(root->left);
        bool right = ismaxorder(root->right);

        return(left && right &&(root->data > root->left->data && root->data > root->right->data))
    }
}


bool isHeap(struct node* tree){
    int index = 0;
    int totalcount = countnodes(tree);
    if(isCBT(tree,index,totalcount) && ismaxorder(tree)){
        return true;
    }
    else
       return false;
}