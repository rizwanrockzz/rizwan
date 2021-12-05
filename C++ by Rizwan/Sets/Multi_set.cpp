#include <bits/stdc++.h>
#include <set>
using namespace std;
// MULTISETS
// prints in sorted order

int main()
{
    multiset<int> s;
    s.insert(3);
    s.insert(3);
    s.insert(3);
    s.insert(3);
    s.insert(3);
    s.insert(3);
    s.insert(1);
    s.insert(2);
    s.insert(1);

    // below is called for each loop
    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << s.size() << endl;
    s.erase(s.find(3));
    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;
    s.erase(3);
    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}