#include <bits/stdc++.h>
#include <deque>
using namespace std;

int main()
{
    deque<int> d;

    d.push_back(1);
    d.push_back(2);
    d.push_front(3);
    d.push_front(4);
    d.push_back(5);
    d.push_back(6);
    d.push_front(7);
    d.push_front(8);

    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;

    d.pop_back();
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;

    d.pop_front();
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Element at Index -> " << d.at(3) << endl;
    cout << "front ->" << d.front() << endl;
    cout << "back ->" << d.back() << endl;
    cout << "Empty ->" << d.empty() << endl;

    cout << "Before erase -> " << d.size() << endl;
    d.erase(d.begin(), d.begin() + 1);
    cout << "After erase -> " << d.size() << endl;

    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;
    cout<<d.max_size()<<endl;

    return 0;
}