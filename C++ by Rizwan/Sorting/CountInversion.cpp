#include <bits/stdc++.h>
using namespace std;
// COUNTING NO OF INVERSIONS IN AN ARRAY USING MERGE SORT;
// AS THE INVERSIONS CAN BE MORE SO WE USE long long
// int arr[] = {3, 5, 6, 9, 1, 2, 7, 8};

long long merge(int arr[], int l, int mid, int r)
{
    long long inv = 0;
    int n1 = mid + 1 - l;
    int n2 = r - mid; //r-(mid+1)-1;

    int a[n1];
    int b[n2];

    for (int i = 0; i < n1; i++)
    {
        a[i] = arr[l + i];
    }

    for (int j = 0; j < n2; j++)
    {
        b[j] = arr[mid + 1 + j];
    }

    int i = 0;
    int j = 0;
    int k = l;

    while (i < n1 && j < n2)
    {
        if (a[i] <= b[j]) /* */
        {
            arr[k] = a[i];
            k++;
            i++;
        }

        else
        {
            arr[k] = b[j];
            inv += n1 - i; /* */
            k++;
            j++;
        }
    }

    while (i < n1)
    {
        arr[k] = a[i];
        k++;
        i++;
    }

    while (j < n2)
    {
        arr[k] = b[j];
        k++;
        j++;
    }
    return inv;
}

long long mergeSort(int arr[], int l, int r)
{
    long long inv = 0;

    if (l < r)
    {
        int mid = (l + r) / 2;

        inv += mergeSort(arr, l, mid);     /* */
        inv += mergeSort(arr, mid + 1, r); /* */
        inv += merge(arr, l, mid, r);      /* */
    }
    return inv;
}

int main()
{
    int n;
    cout << "Enter n " << endl;
    cin >> n;

    cout << "Enter array " << endl;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Your no of inversions are :: " << mergeSort(arr, 0, n - 1);
    return 0;
}

// <-- BRUTE FORCE -->
// TIME COMPLEXITY : O(N*N);

// int main()
// {
// int arr[] = {3, 5, 6, 9, 1, 2, 7, 8};

//     int count = 0;

//     for (int i = 0; i < 8; i++)
//     {
//         for (int j = i + 1; j < 8; j++)
//         {
//             if (arr[i] > arr[j] && i < j)
//             {
//                 count++;
//             }
//         }
//     }

//     cout << count << endl;
// }