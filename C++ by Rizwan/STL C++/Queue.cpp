#include <bits/stdc++.h>
#include <queue>
using namespace std;
// FIFO PROPERTY

int main()
{
    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout << q.front() << endl;

    q.pop();

    cout << q.front() << endl;
    cout << q.size() << endl;
    cout << q.empty() << endl;

    return 0;
}