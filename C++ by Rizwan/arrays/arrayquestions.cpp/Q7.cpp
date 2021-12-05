#include <bits/stdc++.h>
using namespace std;
//  SAMLLEST ELEMENT MISSING IN AN ARRAY
int main()
{

    int n;
    cout << " enter n " << endl;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    const int N = 100;
    bool check[N];

    for (int i = 0; i < N; i++)
    {
        check[i] = 0; // HERE 0 MEANS FALSE AND 1 MEANS TRUE;
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] >= 0)
        {
            check[a[i]] = 1;
        }
    }

    int ans = -1;

    for (int i = 0; i < N; i++)
    {
        if (check[i] == 0)
        {
            ans = i;
            break;
        }
    }

    cout << "Your missinng smallest positive number is " << ans << endl;

    return 0;
}