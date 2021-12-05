#include <bits/stdc++.h>
#include <array>
using namespace std;

int main()
{
    // STL Array is Static
    array<int, 4> a = {1, 2, 3, 4};

    for (int i = 0; i < 4; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    cout << a.at(2) << endl;
    cout << a.empty() << endl;
    cout << a.front() << endl;
    cout << a.back() << endl;
    return 0;
}