#include <bits/stdc++.h>
using namespace std;
// SMALLEST SEQUENCE WITH SUM X

int main()
{
    int n, k;
    cin >> n >> k;

    /* TEST CASE
        n=5 , k=12;
        a(n)={1,1,3,2,8};
    */

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    priority_queue<int, vector<int>> pq;

    for (int i = 0; i < n; i++)
    {
        pq.push(a[i]);
    }

    int sum = 0, count = 0;

    while (!pq.empty())
    {
        sum += pq.top();
        pq.pop();
        count++;

        if (sum >= k)
        {
            break;
        }
    }

    if (sum < k)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << count << endl;
    }

    return 0;
}