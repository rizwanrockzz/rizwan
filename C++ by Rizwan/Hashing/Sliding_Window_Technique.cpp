#include <bits/stdc++.h>
using namespace std;
// SLIDING WINDOW TECHNIQUE HASHING

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int s = 0, ans = INT_MAX;

    for (int i = 0; i < k; i++)
    {
        s += a[i];
    }
    ans = min(ans, s);
    cout << s << " ";

    // sliding window
    for (int i = 1; i < n - k + 1; i++)
    {
        s -= a[i - 1];
        s += a[i + k - 1];

        cout << s << " ";
        ans = min(ans, s);
    }
     cout << endl;

    cout << ans << endl;

    return 0;
}