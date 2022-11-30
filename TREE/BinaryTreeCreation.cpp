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
void levelordertraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();
        
        q.pop();

        if (temp == NULL)
        { // purana level travserse ho chuka hai
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {   
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

int main()
{
    node *root = NULL;

    // creating a tree
    root = buildtree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    levelordertraversal(root);

    return 0;
}