#include <bits/stdc++.h>
using namespace std;
//  PRINTING NUMBERS IN DECREASING ORDER UPTO 1 USING RECURSTION;
//  PRINTING NUMBERS IN INCREASING ORDER UPTO N USING RECURSTION;

void dec(int n)
{

    // if (n == 0)
    // {
    //     return;
    // }

    // you  can write the above one or below one;

    if (n == 1)
    {
        cout << "1" << endl;

        return;
    }

    cout << n << endl;
    dec(n - 1);
}

void inc(int n)
{

    if (n == 1)
    {
        cout << "1" << endl;

        return;
    }

    inc(n - 1);

    cout << n << endl;
}

int main()
{

    int n;
    cout << " enter n " << endl;
    cin >> n;

    cout << endl;
    cout << endl;

    cout << " <-- Decreasing order starts from here --> " << endl;

    dec(n);

    cout << endl;
    cout << endl;

    cout << " <-- Increaseing order starts from here --> " << endl;

    inc(n);
    return 0;
}