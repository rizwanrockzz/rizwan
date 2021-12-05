#include <bits/stdc++.h>
using namespace std;
// FINDING GCD WITH INCLSIVE EXCLUSIVE PRINCIPLE

int gcd(int a, int b)
{

    while (b != 0)
    {
        int rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}

int main()
{
    int a, b;
    cout << "enter a : " << endl;
    cin >> a;
    cout << "enter b : " << endl;
    cin >> b;

    cout << gcd(a, b) << endl;

    return 0;
}