#include <bits/stdc++.h>
using namespace std;
// QUEUE USING STACK
// <--- APPROACH -1 --->
// class Queue
// {
//     stack<int> s1;
//     stack<int> s2;

// public:
//     void push(int x)
//     {
//         s1.push(x);
//     }

//     int Top()
//     {
//         if (s1.empty() and s2.empty())
//         {
//             cout << "Queue is empty : " ;
//             return -1;
//         }
//         if (s2.empty())
//         {
//             while (!s1.empty())
//             {
//                 s2.push(s1.top());
//                 s1.pop();
//             }
//         }
//         int topval = s2.top();
//         s2.pop();
//         return topval;
//     }

//     bool empty()
//     {
//         if (s1.empty() and s2.empty())
//         {
//             return true;
//         }
//         return false;
//     }
// };

// <--- APPROACH -2 --->

class Queue
{
    stack<int> s1;

public:
    void push(int x)
    {
        s1.push(x);
    }

    int Top()
    {
        if (s1.empty())
        {
            cout << "Queue is empty : ";
            return -1;
        }

        int x = s1.top();
        s1.pop();

        if (s1.empty())
        {
            return x;
        }

        int item = Top();
        s1.push(x);

        return item;
    }

    bool empty()
    {
        if (s1.empty())
        {
            return true;
        }
        return false;
    }
};

int main()
{
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    for (int i = 0; i < 6; i++)
    {
        cout << q.Top() << endl;
    }

    return 0;
}