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

int main(){
    //creating object through dma
    node* node1 = new node(10);//it will create new node/objects

    //cout<< node1 ->data<<endl;
    //cout<< node1 ->next<<endl;
   
    //head pointed to node1
    node* head = node1;
    //tail pointed to node1
    node* tail = node1;
    print(head);

    insertattail(tail,12);
    print(head);

    insertattail(tail,15);
    print(head);

    return 0;
}