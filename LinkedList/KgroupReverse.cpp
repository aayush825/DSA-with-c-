#include <iostream>
using namespace std;

class node
{
public:
   // creating node
   int data;
   node *next; // her node* is type of the pointer and next is the name of pointer

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

node *kReverse(node *head, int k)
{
   if (head == NULL)
   {
      return NULL;
   }
   // step1 : reverse first k nodes

   node *next = NULL;
   node *curr = head;
   node *prev = NULL;
   int count = 0;

   while (curr != NULL && count < k)
   {
      next = curr->next;
      curr->next = prev;
      prev = curr;
      curr = next;
      count++;
   }
   if (next != NULL)
   {
      head->next = kReverse(next, k);
   }
   return prev;
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

    head=kReverse(head, 3);
    print(head);

    return 0;
}