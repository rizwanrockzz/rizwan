#include <bits/stdc++.h>
#include <list>
using namespace std;
// LIST IS A DATA STRUCTURE MADE OF DOUBLY LINKED LIST

int main()
{
    list<int> l;

    l.push_front(1);
    l.push_back(2);
    l.push_front(3);
    l.push_back(4);

    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;

    list<int> n(5, 2);
    for (int i : n)
    {
        cout << i << " ";
    }
    cout << endl;

    l.erase(l.begin());
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << l.size() << endl;

    return 0;
}