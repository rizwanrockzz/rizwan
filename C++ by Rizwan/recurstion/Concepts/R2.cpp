#include <bits/stdc++.h>
using namespace std;
//  FINDING N TO  THE POWER OF P USING RECURSTION;

int power(int n, int p)
{

    if (p == 0)
    {
        return 1;
    }

    int prevpower = power(n, p - 1);
    return n * prevpower;
}

int main()
{

    int n, p;
    cout << " enter n and p : " << endl;
    cin >> n >> p;

    cout << " your " << n << " power : " << p << " is : " << power(n, p) << endl;

    return 0;
}