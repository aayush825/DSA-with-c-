
struct node* search(struct node* root,int key){
    if(root == NULL || root->key == key)
        return root;
    if(root->key < key)
        return search(root->right,key);

    return search(root->left,key);        
}