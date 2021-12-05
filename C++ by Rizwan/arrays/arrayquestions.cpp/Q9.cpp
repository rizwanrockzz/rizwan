#include <bits/stdc++.h>
#include <climits>
using namespace std;
// SUM OF THE MAXIMUM SUBARRAY;

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

    // // THIS IS BRUTE FORCE APPROCH;

    // for (int i = 0; i < n; i++)
    // {
    // for (int j = i; j < n; j++)
    //     {
    //         int sum = 0;
    //         for (int k = i; k <= j; k++)
    //         {
    //             sum += a[k];
    //         }
    //         maxSum = max(maxSum, sum);
    //     }
    // }

    // cout << maxSum << endl;

    // NOW THIS IS FASTEST AND SIMPLEST APPROACH WITH LESSTIME COMPLEXITY

    // int currsum[n + 1];
    // currsum[0] = 0;

    // for (int i = 1; i <= n; i++)
    // {
    //     currsum[i] = currsum[i - 1] + a[i - 1];
    // }

    // int maxSum = INT_MIN;
    // for (int i = 1; i <= n; i++)
    // {
    //     int sum = 0;
    //     for (int j = 0; j < i; j++)
    //     {
    //         sum = currsum[i] - currsum[j];
    //         maxSum = max(maxSum, sum);
    //     }
    // }
    // cout << maxSum << endl;

    // THIS IS ANOTHER APPROACH THIS IS CALLED AS KADENS ALGORITHM;

    int currSum = 0;
    int maxSum = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        currSum += a[i];
        if (currSum < 0)
        {
            currSum = 0;
        }
        maxSum = max(maxSum, currSum);
    }

    cout << maxSum << endl;
    return 0;
}