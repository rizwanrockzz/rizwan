#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    // vector< Data Type> intial name;
    vector<int> v;
    v.push_back(3);
    v.push_back(4);
    v.push_back(1);
    v.push_back(2);
    v.push_back(5);

    //   THERE ARE THREE TYPES OF WAYS OF PRINTING OUTPUT;
    cout << " First Method " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    } // The output will be :: 1 2 3 4 5

    cout << " Second Method " << endl;
    //  Iterator is a pointer
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << endl;
    }

    cout << " Third Method " << endl;
    for (auto element : v)
    {
        cout << element << endl;
    }
    cout << " here it is popping back " << endl;
    v.pop_back();
    //(no of elements,its value)
    vector<int> v2(3, 100);

    swap(v, v2);

    for (auto element : v)
    {
        cout << element << endl;
    }

    cout << " here it is swapped " << endl;

    for (auto element : v2)
    {
        cout << element << endl;
    }

    return 0;
}