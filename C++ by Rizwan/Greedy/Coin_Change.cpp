#include <bits/stdc++.h>
using namespace std;
// INDIAN COIN CHANGE PROBLEM USING GREEDY METHODS

int main()
{
    int n, x;
    cin >> n >> x;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end(), greater<int>());

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        ans += x / a[i];
        x -= x / a[i] * a[i];
    }
    cout << ans << endl;
    return 0;
}