#include <bits/stdc++.h>
using namespace std;
// HEAPS STL LIBRARY

int main()
{
    // MAX HEAP
    priority_queue<int, vector<int>> pq;
    pq.push(2);
    pq.push(1);
    pq.push(3);

    cout << pq.top() << endl;
    pq.pop();
    cout << pq.top() << endl;

    cout << endl;
    cout << endl;

    priority_queue<int, vector<int>, greater<int>> pqm;
    pqm.push(2);
    pqm.push(1);
    pqm.push(3);

    cout << pqm.top() << endl;
    pqm.pop(); 
    cout << pqm.top() << endl;

    return 0;
}