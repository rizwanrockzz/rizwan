#include <bits/stdc++.h>
using namespace std;
//  INTERSECTION IN GIVEN TWO LINKED LIST
// TIMR COMPLEXITY IS 0(n) WHEREE n IS THE LENGTH OF LARGER LINKED LIST

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

void intersect(node *&head1, node *&head2, int pos)
{
    node *temp1 = head1;
    pos--;
    while (pos--)
    {
        temp1 = temp1->next;
    }
    node *temp2 = head2;
    while (temp2->next != NULL)
    {
        temp2 = temp2->next;
    }
    temp2->next = temp1;
}

int intersection(node *&head1, node *&head2)
{
    int l1 = length(head1);
    int l2 = length(head2);
    int d = 0;

    node *ptr1;
    node *ptr2;
    // THE LINKED LIST WHICH HAS LARGER LENGTH IT'S HEAD IS STORED IN ptr1
    if (l1 > l2)
    {
        d = l1 - l2;
        ptr1 = head1;
        ptr2 = head2;
    }
    else
    {
        d = l2 - l1;
        ptr1 = head2;
        ptr2 = head1;
    }

    // move the larger string upto d distance
    while (d)
    {
        ptr1 = ptr1->next;
        if (ptr1 == NULL)
        {
            return -1;
        }
        d--;
    }

    while (ptr1 != NULL && ptr2 != NULL)
    {
        if (ptr1 == ptr2)
        {
            return ptr1->data;
        }

        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return -1;
}

int main()
{
    node *head1 = NULL;
    node *head2 = NULL;
    // insertattail(head1, 1);
    // insertattail(head1, 2);
    // insertattail(head1, 5);
    // insertattail(head1, 6);
    // insertattail(head1, 3);
    // insertattail(head1, 4);
    // insertattail(head2, 9);
    // insertattail(head2, 10);
    insertattail(head1, 1);
    insertattail(head1, 2);
    insertattail(head1, 3);
    insertattail(head1, 4);
    insertattail(head1, 5);
    insertattail(head1, 6);
    insertattail(head2, 9);
    insertattail(head2, 10);
    print(head1);
    print(head2);
    intersect(head1, head2, 3);
    print(head1);
    print(head2);
    cout << intersection(head1, head2);

    return 0;
}