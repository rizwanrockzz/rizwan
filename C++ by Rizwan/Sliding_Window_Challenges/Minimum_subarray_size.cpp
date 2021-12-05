#include <bits/stdc++.h>
using namespace std;
// MINIMUM SUBARRAY SIZE WITH SUM>X

int smallestSubArraySize(int arr[], int n, int x)
{
    int sum = 0, minimumLength = n + 1, start = 0, end = 0;

    while (end < n)
    {
        while (sum <= x && end < n)
        {
            sum += arr[end++];
        }
        while (sum > x && start < n)
        {
            if (end - start < minimumLength)
            {
                minimumLength = end - start;
            }

            sum -= arr[start++];
        }
    }

    return minimumLength;
}

int main()
{
    int arr[] = {1, 4, 45, 6, 10, 19};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 51;

    int minimumLength = smallestSubArraySize(arr, n, x);

    if (minimumLength == n + 1)
    {
        cout << "No such SubArray exists" << endl;
    }
    else
    {
        cout << "Smallest sum Subarray size is : " << minimumLength
             << endl;
    }

    return 0;
}