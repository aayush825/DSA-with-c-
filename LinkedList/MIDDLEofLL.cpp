// https://www.codingninjas.com/codestudio/problems/middle-of-linked-list_973250?source=youtube&campaign=Lovebabbarcodestudio_24thJan&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio_24thJan
//find middle of ll


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


int getlength(node* head){
    int len = 0;
    node* temp = head;

    while(temp != NULL){
        len++;
        temp = temp->next;
    }
    

}

node *findmiddle(node *head){
    int len = getlength(head);
    int ans = (len/2);

    node* temp = head;
    int cnt =0;
    while (cnt < ans)
    {
        temp = temp->next;
        cnt++;
    }
    
    return temp;
}


node * getmiddle(node* head){

    if(head == NULL || head -> next == NULL)
        return head;

    if(head-> next->next == NULL)  {
        return head ->next; 
    }
    node* slow = head;
    node* fast = head->next;

    while(fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast-> next;
        }
        slow = slow ->next;
    }

    cout<<"middle  "<<slow->data<<endl;
    
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
    cout << "Linked List: ";
    print(head);

   getmiddle(head);

    return 0;
}