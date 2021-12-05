#include <bits/stdc++.h>
using namespace std;
// FINDING GCD WITH INCLSIVE EXCLUSIVE PRINCIPLE

int divisable(int n, int a, int b)
{

    int c1 = n / a;
    int c2 = n / b;
    int c3 = n / (a * b);

    return (c1 + c2 - c3);
}

int main()
{
    int a, b, n;
    cout << "enter n : " << endl;
    cin >> n;
    cout << "enter a : " << endl;
    cin >> a;
    cout << "enter b : " << endl;
    cin >> b;

    cout << divisable(n, a, b) << endl;

    return 0;
}