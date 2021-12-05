#include <bits/stdc++.h>
using namespace std;
// TO CHECK WHETHER A NUMBER IS A POWER OF 2 BY BIT MANUPULATION;

int ispowerof2(int n)
{
    return (n && !(n & n - 1));
}

int main()
{
    int n;
    cout << " enter n : " << endl;
    cin >> n;

    cout << "yout answer is : " << ispowerof2(n) << endl;

    return 0;
}