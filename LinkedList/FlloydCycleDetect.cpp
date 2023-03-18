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

void insertattail(node *&tail, int d)
{
    // new node create
    node *temp = new node(d);
    tail->next = temp;
    tail = temp;
}

node *floydDetectLoop(node *head)
{

    if (head == NULL)
        return 0;

    node *slow = head;
    node *fast = head;

    while (slow != NULL && fast != NULL)
    {

        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }

        slow = slow->next;

        if (slow == fast)
        {
            cout << " present at " << slow->data << endl;
            return slow;
        }
    }

    return NULL;
}

node *getStartingNode(node *head)
{

    if (head == NULL)
        return NULL;

    node *intersection = floydDetectLoop(head);
    node *slow = head;

    while (slow != intersection)
    {
        slow = slow->next;
        intersection = intersection->next;
    }

    return slow;
}

//remove loop
void removeloop(node* head){
    if(head == NULL)
    return;

    node* startofloop = getStartingNode(head);
    node* temp = startofloop;
    while(temp->next != startofloop){
        temp = temp->next;

    }
    temp->next = NULL;
}

int main()
{
    node *node1 = new node(10);
    node *head = node1;
    node *tail = node1;

    insertattail(tail, 12);
    insertattail(tail, 15);
    insertattail(tail, 17);
    insertattail(tail, 18);
    print(head);

    tail->next = head->next;//to put loop

    if (floydDetectLoop(head))
        cout << "Loop found";
    else
        cout << "No Loop";

    node *loop = getStartingNode(head);
    cout << "loop starts at " << loop->data;

    removeloop(head);
    print(head);

    return 0;
}