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

    ~node(){
        int val = this->data;

        if(next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"memory free with data"<<val<<endl;
    }

};
//Deletion 
void deletenode(int position,node* &head){
  //deleting first or start node
  if(position ==1){
    node* temp = head;
    temp->next->prev = NULL;
    head = temp->next;
    temp ->next = NULL;
    delete temp;
  }
  else{

    //deleting any middle node or last node
    node* curr = head;
    node* prev = NULL;

    int cnt =1;
    while(cnt < position){
        prev = curr;
        curr = curr-> next;
        cnt++;
    }

    curr->prev = NULL;
    prev->next = curr->next;
    curr->next = NULL;

    delete curr;

  }
}

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
        cnt++;
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
    cout<<"head  "<<head->data<<endl;
    cout<<"tail  "<<tail->data<<endl;

    insertathead(head,16);
    print(head);
     cout<<"head  "<<head->data<<endl;
    cout<<"tail  "<<tail->data<<endl;

    insertathead(head,19);
    print(head);
     cout<<"head  "<<head->data<<endl;
    cout<<"tail  "<<tail->data<<endl;

     insertattail(tail,196);
    print(head);
     cout<<"head  "<<head->data<<endl;
    cout<<"tail  "<<tail->data<<endl;

    insertatposition(tail,head,2,100);
    print(head);
     cout<<"head  "<<head->data<<endl;
    cout<<"tail  "<<tail->data<<endl;

    insertatposition(tail,head,1,14);
    print(head);
     cout<<"head  "<<head->data<<endl;
    cout<<"tail  "<<tail->data<<endl;

    deletenode(1,head);
    print(head);
     cout<<"head  "<<head->data<<endl;
    cout<<"tail  "<<tail->data<<endl;

    deletenode(6,head);
    print(head);
     cout<<"head  "<<head->data<<endl;
    cout<<"tail  "<<tail->data<<endl;
}
//manage the tail part 1:38
