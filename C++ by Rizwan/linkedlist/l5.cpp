#include <bits/stdc++.h>
using namespace std;
// INTRODUCTION TO DOUBLY LINKED LIST

class node
{
public:
    int data;
    node *next;
    node *prev;
    // we are creating a constructor because we cannot send directly send values to
    node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

void insertathead(node *&head, int val)
{

    node *n = new node(val);
    n->next = head;
    if (head != NULL)
    {
        head->prev = n;
    }

    head = n;
}

// Here we are modifiying head value to insert n in the linked list do we take head by reference and not by value;
void insertattail(node *&head, int val)
{
    if (head == NULL)
    {
        insertathead(head, val);
        return;
    }

    node *n = new node(val);
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
}

// Here we are just printing vlaues so we take head by value and not by reference;
void print(node *head)
{
    cout << "NULL<-";
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

bool search(node *head, int key)
{
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

void deleteathead(node *&head)
{

    node *todelete = head;
    head = head->next;
    head->prev = NULL;

    delete todelete;
}

void deletion(node *&head, int pos)
{

    // if (head == NULL)
    // {
    //     return;
    // }

    if (pos == 1)
    {
        deleteathead(head);
        return;
    }

    node *temp = head;
    int count = 1;

    while (temp != NULL && count < pos)
    {
        temp = temp->next;
        count++;
    }

    temp->prev->next = temp->next;
    if (temp->next != NULL)
    {
        temp->next->prev = temp->prev;
    }

    delete temp;
}

int main()
{
    node *head = NULL;
    insertattail(head, 1);
    insertattail(head, 2);
    insertattail(head, 3);
    insertattail(head, 4);
    // print(head);
    insertathead(head, 5);
    // // insertathead(head, 6);
    // // insertathead(head, 7);
    // // insertathead(head, 8);
    print(head);
    cout << search(head, 1) << endl;
    deletion(head, 3);
    print(head);

    return 0;
}