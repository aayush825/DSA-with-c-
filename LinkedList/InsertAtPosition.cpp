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

//inserting nodes at head
void insertathead(node* &head, int d){
    //new node create
    node* temp = new node(d);
    temp -> next =head;
    head = temp;

}
//inserting nodes at tail
void insertattail(node* &tail, int d){
    //new node create
    node* temp = new node(d);
    tail -> next =temp;
    tail = temp;

}

void insertAtPosition(node* &tail,node* & head, int position, int d) {


    //insert at Start
    if(position == 1) {
        insertathead(head, d);
        return;
    }

    node* temp  = head;
    int cnt = 1;

    while(cnt < position-1) {
        temp = temp->next;
        cnt++;
    }

    //creating a node for d

    node* nodetoinsert = new node(d);
    nodetoinsert -> next = temp -> next;
    temp -> next = nodetoinsert;

    if(temp-> next == NULL){
        insertattail(tail,d);
        return;
    }
 
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

int main(){
    //creating object through dma
    node* node1 = new node(10);//it will create new node/objects

    //cout<< node1 ->data<<endl;
    //cout<< node1 ->next<<endl;
   
    //head pointed to node1
    node* head = node1;
     node* tail = node1;
    
    print(head);

    insertathead(head,12);
    print(head);

    insertathead(head,15);
    print(head);

    insertathead(head,16);
    print(head);
    insertattail(tail,69);
    print(head);

    insertAtPosition(tail,head,3,22);
    print(head);
    

    cout<<"head  "<<head->data<<endl;
    cout<<"head  "<<tail->data<<endl;

    return 0;
}