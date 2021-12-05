#include <bits/stdc++.h>
using namespace std;
// MAP

int main()
{
    // insert,erase,count :: T C = O(log(n))

    map<int, string> m;

    m[1] = "rizwan";
    m.insert({4, "Billionaire"});
    m[3] = "rizwan_RiZzu";
    m[2] = "rizwan_rockzz";

    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    cout << "Finding 2 -> " << m.count(2) << endl;
    m.erase(2);
    cout << "Finding 2 ->" << m.count(2) << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    auto it = m.find(3);
    for (auto i = it; i != m.end(); i++)
    {
        cout << (*i).first << endl;
    }

    return 0;
}