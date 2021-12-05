#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
// PLACE ELEMENTS TO MAXIMIZE MINIMUM DISTANCE

bool isFeasible(int mid, int arr[], int n, int k)
{
    int pos = arr[0];
    int elements = 1;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] - pos >= mid)
        {
            pos = arr[i];
            elements++;
            if (elements == k)
            {
                return true;
            }
        }
    }
    return false;
}

int Largest_Min_Distance(int arr[], int n, int k)
{
    sort(arr, arr + n);
    int result = -1;
    int left = 1, right = arr[n - 1];

    while (left < right)
    {
        int mid = (left + right) / 2;

        if (isFeasible(mid, arr, n, k))
        {
            result = max(result, mid);
            left = mid + 1;
        }
        else
        {
            right = mid;
        }
    }
    return result;
}

int main()
{
    int arr[] = {1, 2, 8, 4, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    cout << "Largest Minimum Distance is : " << Largest_Min_Distance(arr, n, k) << endl;

    return 0;
}