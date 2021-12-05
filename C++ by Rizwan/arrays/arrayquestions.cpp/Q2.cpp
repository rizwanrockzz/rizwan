#include <bits/stdc++.h>
using namespace std;

// SUBARRAYS AND SUBSEQUENCES
// EVERY SUBARRAY IS A SUBSSEQUENCE BUT EVERY SUBSEQUENCE IS NOT A SUBARRAY
// SUM OF ALL SUBARRAYS IS n*(n+1)/2 OR nc2+n;
// SUM OF ALL SUBSSEQUENCE IS 2POW(N);

int main()
{

    int n;
    cout << " enter n " << endl;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << endl;
    cout << endl;

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            cout << sum << endl;
        }
    }

    return 0;
}