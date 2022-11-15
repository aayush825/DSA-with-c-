
//1:20 ll - love babbar
#include<iostream>
using namespace std;

class node {
    public:
    int data;
    node* prev;
    node* next;

    //constructor
    node(int d){
        this-> data=d;
        this->prev = NULL;
        this->next = NULL;

    }

};

void print(node* head){
    node* temp = head;

    while(temp != NULL){
        cout<< temp ->data<<" ";
        temp = temp-> next;
    }
    cout<<endl;

}
//length of linkedlist
int getlength(node* head){
    int len = 0;
    node* temp = head;

    while(temp != NULL){
        len++;
        temp = temp->next;
    }
    return len;

}

void insertathead(node* &head,int d){

    if(head == NULL){
        node* temp = new node(d);
        head = temp;
    }

    else{
   node* temp = new node(d);
   temp -> next = head;
   head -> prev = temp;
   head = temp;
    }
}
void insertattail(node* &tail,int d){

    node* temp = new node(d);
    tail ->next =temp;
    temp -> prev =tail;
    tail =temp;
}

void insertatposition(node* &tail,node* &head,int positon,int d){
    //insert at start
    if(positon == 1){
        insertathead(head,d);
        return;
    }
    node* temp = head;
    int cnt =1;
    while(cnt < positon-1){
        temp = temp ->next;
        cnt;
    }
    //inserting at last position
    if(temp ->next ==NULL){
        insertattail(tail,d);
        return;
    }

    //creating a node
    node* nodetoinsert = new node(d);

    nodetoinsert->next = temp->next;
    temp ->next->prev = nodetoinsert;
    temp->next = nodetoinsert;
    nodetoinsert->prev = temp;

}

int main(){
    node* node1 = new node(10);

    node* head= node1;
    node* tail= node1;
    print(head);
    cout<<getlength(head)<<endl;

    insertathead(head,11);
    print(head);

    insertathead(head,16);
    print(head);

    insertathead(head,19);
    print(head);

     insertattail(tail,196);
    print(head);

    insertatposition(tail,head,2,100);
    print(head);

    insertatposition(tail,head,1,14);
    print(head);
}
