#include <iostream>
using namespace std;

class node
{

public:
    // creating node
    int data;
    node *next; // her node* is type of the pointer and next is the name of pointer

    // constructor
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    ~node()
    {

        int value = this->data;
        // memory free

        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
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

void insertattail(node *&tail, int d)
{
    // new node create
    node *temp = new node(d);
    tail->next = temp;
    tail = temp;
}

node *uniquesortedlist(node *head)
{
    if (head == NULL)
        return NULL;

    node *curr = head;
    while (curr != NULL)
    {
        if ((curr->next != NULL) && curr->data == curr->next->data)
        {
            node *next_next = curr->next->next;
            node *nodetodelete = curr->next;
            delete nodetodelete;
            curr->next = next_next;
        }
        else
        {
            curr = curr->next;
        }
    }
    
}
int main()
{
    node *node1 = new node(10);
    node *head = node1;
    node *tail = node1;

    insertattail(tail, 12);
    insertattail(tail, 15);
    insertattail(tail, 15);
    insertattail(tail, 18);
    insertattail(tail, 19);
    print(head);
    uniquesortedlist(head);

     print(head);

    return 0;
}
