#include<iostream>
using namespace std;

class node{

    public:

    //creating node
    int data;
    node* next; //her node* is type of the pointer and next is the name of pointer

    //constructor
    node(int data){
        this -> data =data;
        this -> next = NULL;
    }
};

//inserting nodes at tail
void insertattail(node* &tail, int d){
    //new node create
    node* temp = new node(d);
    tail -> next =temp;
    tail = temp;
}

//printing a inkedlist
void print(node* &head){

    node* temp=head;

    while(temp!= NULL){
        cout<< temp -> data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

node *findmid(node *head)
{
    node *slow = head;
    node *fast = head->next;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

node *merge(node *left, node *right)
{

    if (left == NULL)
        return right;
    if (right == NULL)
        return left;

    node *ans = new node(-1);
    node *temp = ans;
    // merging 
    while (left != NULL && right != NULL)
    {
        if (left->data < right->data)
        {
            temp->next = left;
            temp = left;
            left = left->next;
        }
        else
        {
            temp->next = right;
            temp = right;
            right = right->next;
        }
       
    }
    while (left != NULL)
    {
        temp->next = left;
        temp = left;
        left = left->next;
    }
    while (right != NULL)
    {
        temp->next = right;
        temp = right;
        right = right->next;
    }
     ans = ans->next;
        return ans;
}

node* mergesort(node* head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    // breaking LL into 2 halves
    node *mid = findmid(head);
    node *left = head;
    node *right = mid->next;
    mid->next = NULL;

    // recursive call for noth halves
    left = mergesort(left);
    right = mergesort(right);

    // merge both left and right halves
    node *result = merge(left, right);

    return result;
}

int main(){
    //creating object through dma
    node* node1 = new node(15);//it will create new node/objects

    node* head = node1;
    
    node* tail = node1;
 
    insertattail(tail,12);
   
    insertattail(tail,10);
    print(head);
    mergesort(head);
    print(head);

    return 0;
}