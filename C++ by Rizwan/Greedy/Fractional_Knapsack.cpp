#include <bits/stdc++.h>
using namespace std;

// FRACTIONAL KNAPSACK

#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>
#define ff first
#define ss second
#define rep(i, a, b) for (int i = a; i < b; i++)

bool compare(pii p1, pii p2)
{
    double v1 = (double)p1.ff / p1.ss;
    double v2 = (double)p2.ff / p2.ss;

    return v1 > v2;
}

int main()
{
    int n;
    cin >> n;

    int w;
    cin >> w;

    vii a(n);

    rep(i, 0, n)
    {
        cin >> a[i].ff >> a[i].ss;
    }

    sort(a.begin(), a.end(), compare);

    int ans = 0;

    rep(i, 0, n)
    {
        if (w >= a[i].ss)
        {
            ans += a[i].ff;
            w -= a[i].ss;
            continue;
        }

        double vw = (double)a[i].ff / a[i].ss;
        ans += vw * w;
        w = 0;
        break;
    }

    cout << "Max Value : " << ans << endl;

    return 0;
}

/* Test Case

    5
    20
    21 7
    24 4
    12 6
    40 5
    30 6
   
 */