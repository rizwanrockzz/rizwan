#include <bits/stdc++.h>
using namespace std;
//  CYCLE IN A LINKED LIST
// FLOYD'S ALGORITHM OR HARE(RABBIT) AND TORTOISE ALGORITHM

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

void makeCycle(node *&head, int pos)
{
    node *temp = head;
    node *startnode;
    int count = 1;
    while (temp->next != NULL)
    {
        if (count == pos)
        {
            startnode = temp;
        }
        temp = temp->next;
        count++;
    }
    temp->next = startnode;
}

void removeCycle(node *&head)
{
    node *slow = head;
    node *fast = head;

    do
    {
        slow = slow->next;
        fast = fast->next->next;
    } while (slow != fast);

    fast = head;
    while (fast->next != slow->next)
    {
        slow = slow->next;
        fast = fast->next;
    }

    slow->next = NULL;
}

// THIS IS FLOYD'S ALGORIHTM
// HERE WE START A RABBIT AND A TORTOISE FROM HEAD RABBIT MOVES TWO STEPS AND TORTOISE MOVES SINGLE STEP WHEN BOTH THE RABBIT AND TORTOISE MEET AT SAME MEANS THERE IS A CYCLE IN THE LINKED LIST
bool detectCycle(node *&head)
{

    node *slow = head;
    node *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (fast == slow)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    node *head = NULL;
    insertattail(head, 1);
    insertattail(head, 2);
    insertattail(head, 3);
    insertattail(head, 4);
    insertattail(head, 5);
    insertattail(head, 6);
    print(head);
    makeCycle(head, 3);
    // print(head);
    cout << detectCycle(head) << endl;
    // if (detectCycle)
    // {
    //     cout << "There is a cycle in the linked list\n";
    // }
    // else
    // {
    //     cout << "There is no cycle present in the linked list\n";
    // }

    removeCycle(head);
    cout << detectCycle(head) << endl;

    return 0;
}