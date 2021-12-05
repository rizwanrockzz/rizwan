#include <bits/stdc++.h>
using namespace std;
// MERGING TWO LINKED LISTS
// TIMR=E COMPLEXITY = 0(m+n) WHERE M IS THE LENGTH OF FIRST LL & N IS THE LENGTH OF OTHER LL

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

// void insertathead(node *&head, int val)
// {

//     node *n = new node(val);
//     n->next = head;
//     head = n;
// }

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

// ITERATIVE WAY
node *merge(node *&head1, node *&head2)
{
    node *ptr1 = head1;
    node *ptr2 = head2;
    node *dummynode = new node(-1);
    node *ptr3 = dummynode;

    while (ptr1 != NULL && ptr2 != NULL)
    {
        if (ptr1->data < ptr2->data)
        {
            ptr3->next = ptr1;
            ptr1 = ptr1->next;
        }
        else
        {
            ptr3->next = ptr2;
            ptr2 = ptr2->next;
        }
        ptr3 = ptr3->next;
    }

    while (ptr1 != NULL)
    {
        ptr3->next = ptr1;
        ptr1 = ptr1->next;
        ptr3 = ptr3->next;
    }
    while (ptr2 != NULL)
    {
        ptr3->next = ptr2;
        ptr2 = ptr2->next;
        ptr3 = ptr3->next;
    }
    return dummynode->next;
}

node *mergeRecursive(node *&head1, node *&head2)
{
    if (head1 == NULL)
    {
        return head2;
    }
    if (head2 == NULL)
    {
        return head1;
    }

    node *result;
    if (head1->data < head2->data)
    {
        result = head1;
        result->next = mergeRecursive(head1->next, head2);
    }
    else
    {
        result = head2;
        result->next = mergeRecursive(head1, head2->next);
    }
    return result;
}

int main()
{
    node *head1 = NULL;
    node *head2 = NULL;
    int arr1[] = {1, 4, 5, 7};
    int arr2[] = {2, 3, 6};
    for (int i = 0; i < 4; i++)
    {
        insertattail(head1, arr1[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        insertattail(head2, arr2[i]);
    }
    print(head1);
    print(head2);
    // node *newhead = mergeRecursive(head1, head2);
    // print(newhead);
    node *newhead = merge(head1, head2);
    print(newhead);

    return 0;
}