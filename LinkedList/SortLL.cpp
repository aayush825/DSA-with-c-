//sort ll of 0s 1s 2s  : 0->1->0->1->2->->1->0
//approach 1

#include <bits/stdc++.h>
using namespace std;


class node
{
public:
    int data;
    node *next;

    // Constructor
    node(int d)
    {
        data = d;
        next = NULL;
    }
};

void print(node *head)
{
    if (head == NULL)
    {
        cout << "The list is empty !!" << endl;
    }

    while (head != NULL)
    {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL";
    cout << endl;
}

void Insert_At_Tail(node *&head, int data)
{
    if (head == NULL)
    {
        head = new node(data);
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new node(data);
    return;
}
//Sort

node* sortlist(node* head){
    int zerocount = 0;
    int onecount = 1;
    int twocount = 2;

    node* temp =head;

    while(temp != NULL){
        if(temp -> data == 0)
            zerocount++;
        
        else if(temp -> data == 1)
            onecount++;
        
        else if(temp -> data == 2)
             twocount++;
        
        temp = temp->next;
    }
    temp = head;
    while(temp != NULL){
        if(zerocount != 0){
            temp->data = 0;
            zerocount--;
            
        }
        else if(onecount != 0){
            temp->data = 1;
            onecount--;
            
        }
        else if(twocount != 0){
            temp->data = 2;
            twocount--;
            
        }
        temp = temp->next;
    }
    return head;
}

int main()
{
    node *head = NULL;
    int n, data;
    cout << "Enter the number of nodes you want to create: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the data: ";
        cin >> data;
        Insert_At_Tail(head, data);
    }
   
    print(head);
       
    sortlist(head);
    print(head);
    return 0;
}

/*
//approach 2 : data repllacement not allowed
node* sortlist1(node *head){
    node* zerohead = new node(-1);
    node* zerotail = zerohead;
    node* onehead = new node(-1);
    node* onetail = onehead;
    node* twohead =new node(-1);
    node* twotail = twohead;
}
*/
