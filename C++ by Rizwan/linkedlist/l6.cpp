#include <bits/stdc++.h>
using namespace std;
//  APPENDING LAST K NODES TO THE FIRST OF THE LINKED LIST

class node
{
public:
    int data;
    node *next;

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

int length(node *head)
{
    int l = 0;
    node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        l++;
    }
    return l;
}

node *k_append(node *&head, int k)
{
    node *newhead;
    node *newtail;
    node *tail = head;

    int l = length(head);
    // k = k % 1;
    int count = 1;

    while (tail->next != NULL)
    {
        if (count == l - k)
        {
            newtail = tail;
        }
        if (count == l - k + 1)
        {
            newhead = tail;
        }

        tail = tail->next;
        count++;
    }

    newtail->next = NULL;
    tail->next = head;

    return newhead;
}

int main()
{
    node *head = NULL;
    // insertattail(head, 1);
    // insertattail(head, 2);
    // insertattail(head, 3);
    // insertattail(head, 4);
    // insertattail(head, 5);
    // insertattail(head, 6);
    //        or
    int arr[] = {1, 2, 3, 4, 5, 6};
    for (int i = 0; i < 6; i++)
    {
        insertattail(head, arr[i]);
    }

    print(head);
    node *newhead = k_append(head, 3);

    print(newhead);

    return 0;
}