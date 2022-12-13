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

void print(node* &head)
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



node* solve(node* first, node* second)
{
    if(first->next == NULL){
        first->next = second;
        return first;
    }
    node *curr1 = first;
    node *next1 = curr1->next;

    node *curr2 = second;
    node *next2 = curr2->next;

    while (next1 != NULL && curr2 != NULL)
    {

        if ((curr2->data >= curr1->data) && (curr2->data <= next1->data))
        {

            curr1->next = curr2;
            curr2->next = next1;
            curr1 = curr2;
            curr2 = next2;
        }
        else
        {
            curr1 = next1;
            next1 = next1->next;

            if (next1 == NULL)
            {
                curr1->next = curr2;
                return first;
            }
        }
    }
    return first;
}
node *sortTwoLists(node *first, node *second)
{
    if (first == NULL)
        return second;

    if (second == NULL)
        return first;

    if (first->data <= second->data)
    {
       return solve(first, second);
    }
    else
    {
       return solve(second, first);
    }
}


int main()
{
    node *first = NULL;
    node *second = NULL;
    
    
    int n, data;
    cout << "Enter the number of nodes you want to create: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the data: ";
        cin >> data;
        Insert_At_Tail(first, data);
    }
    cout << "Linked List: ";
    print(first);


    int a,dataa;
    cout << "Enter the number of nodes you want to create: ";
    cin >> a;
    for (int j = 0; j < a; j++)
    {
        cout << "Enter the data: ";
        cin >> dataa;
        Insert_At_Tail(second, dataa);
    }
    print(second);
    sortTwoLists(first,second);
    print(first);

    return 0;
}
