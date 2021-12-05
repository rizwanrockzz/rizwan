#include <bits/stdc++.h>
using namespace std;
// INTRODUCTION TO LINKED LIST

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

void insertathead(node *&head, int val)
{

    node *n = new node(val);
    n->next = head;
    head = n;
}

// Here we are modifiying head value to insert n in the linked list do we take head by reference and not by value;
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

// Here we are printing vlaues sowe take head by value and not by reference;
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

    delete todelete;
}

void deletion(node *&head, int val)
{

    if (head == NULL)
    {
        return;
    }

    if (head->next == NULL)
    {
        deleteathead(head);
        return;
    }

    node *temp = head;
    while (temp->next->data != val)
    {
        temp = temp->next;
    }

    node *todelete = temp->next;
    temp->next = temp->next->next;

    delete todelete;
    // if u dont delete the program will run but inreal world there is a chance of memory leakage;so d delete if u don't need something
}

int main()
{
    node *head = NULL;
    // cout << "inserting at tail" << endl;
    insertattail(head, 1);
    insertattail(head, 2);
    insertattail(head, 3);
    insertattail(head, 4);
    // print(head);
    // cout << "inserting at head" << endl;
    // insertathead(head, 5);
    insertathead(head, 6);
    insertathead(head, 7);
    insertathead(head, 8);
    insertathead(head, 5);
    // print(head);
    // cout << "Answer for searching  a key in an linkedlist ::" << search(head, 7) << endl;
    // cout << "Deleting in linked list " << endl;
    deletion(head, 2);
    print(head);
    // cout << "Deleting head in linked list " << endl;
    // deleteathead(head);
    // print(head);

    return 0;
}