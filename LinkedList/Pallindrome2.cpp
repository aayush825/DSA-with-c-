
//above approach space time complex - 0(n)
//approach 2
//time complexity-0n sc- 0(1)
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

node* getmid(node* head){
    node* slow = head;
    node* fast = head->next;

    while(fast != NULL && fast->next != NULL){
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}
node* reverse(node* head){
    node*  curr = head;
    node* prev = NULL;
    node*n =NULL;
    while(curr != NULL){
        n = curr->next;
        curr->next = prev;
        prev = curr;
        curr = n;
    }
    return prev;
}

bool ispalindrome(node* head){
    if(head->next == NULL){
        return true;
    }
    //find middle
    node* middle = getmid(head);

    // reverse list after middle
    node* temp = middle->next;
    middle->next = reverse(temp);

    //compare both halves
    node* head1 = head;
    node* head2 = middle->next;

    while(head2 != NULL){
        if(head1->data != head2->data){
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
  //step 4 repeat step2
    temp = middle->next;
    middle->next = reverse(temp);

    return true;
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

    bool ans = ispalindrome(head);

    if(ans)
        cout<<"pallindrome";
    else
        cout<<"not pallindrome";    
   
    return 0;
}
