#include <bits/stdc++.h>
using namespace std;
// ALL POSSIBLE SUBARRAYS
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

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << a[k] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}