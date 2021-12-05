#include <bits/stdc++.h>
using namespace std;
// HEAPS STL LIBRARY

int main()
{
    // MAX HEAP
    priority_queue<int, vector<int>> maxi;
    maxi.push(2);
    maxi.push(1);
    maxi.push(3);
    maxi.push(0);

    int n = maxi.size();

    for (int i = 0; i < n; i++)
    {
        cout << maxi.top() << " ";
        maxi.pop();
    }
    cout << endl;

    cout << maxi.top() << endl;
    maxi.pop();
    cout << maxi.top() << endl;
    cout << maxi.empty() << endl;

    cout << endl;

    // MIN HEAP
    priority_queue<int, vector<int>, greater<int>> mini;
    mini.push(5);
    mini.push(4);
    mini.push(3);
    mini.push(2);
    mini.push(1);

    int m = mini.size();

    for (int i = 0; i < m; i++)
    {
        cout << mini.top() << " ";
        mini.pop();
    }
    cout << endl;

    cout << mini.top() << endl;
    mini.pop();
    cout << mini.top() << endl;
    cout << mini.empty() << endl;

    return 0;
}