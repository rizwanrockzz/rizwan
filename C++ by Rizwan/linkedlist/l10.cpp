#include <bits/stdc++.h>
using namespace std;
// EVEN NODES AFTER ODD NODES
// TIME COMPLEXITY=0(n) WHERE n I STHE LENGTH OF LINKED LIST  

class node
{
public:
    int data;
    node *next;
    // we are creating a constructor
    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertattail(node *&head, int val)
{

    node *n = new node(val);

    if (head == NULL)
    {
        head = n;
        return;
    }

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void print(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void evenafterodd(node *&head)
{
    node *odd = head;
    node *even = odd->next;
    node *evenstart = even;

    while (odd->next != NULL && even->next != NULL)
    {
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even = even->next;
    }

    odd->next = evenstart;
    if (odd->next == NULL)
    {
        even->next = NULL;
    }
}

int main()
{
    node *head = NULL;
    for (int i = 1; i <= 7; i++)
    {
        insertattail(head, i);
    }
    print(head);
    evenafterodd(head);
    print(head);

    return 0;
}