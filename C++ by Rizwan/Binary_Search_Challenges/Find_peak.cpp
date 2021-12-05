#include <bits/stdc++.h>
using namespace std;
// FIND PEAK ELEMENT IN A SORTED ARRAY

int findPeekElement(int arr[], int low, int high, int n)
{
    int mid = low + (high - low) / 2;
    // int mid = (high + low) / 2;

    if ((mid == 0 || arr[mid - 1] <= arr[mid]) && (mid == n - 1 || arr[mid + 1] <= arr[mid]))
    {
        return mid;
        // return arr[mid];
    }

    else if (mid > 0 && arr[mid - 1] > arr[mid])
    {
        return findPeekElement(arr, low, mid - 1, n);
    }

    return findPeekElement(arr, mid + 1, high, n);
}

int main()
{
    int arr[] = {0, 6, 8, 5, 7, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Peak Element Index is = " << findPeekElement(arr, 0, n - 1, n) << endl;
    return 0;
}