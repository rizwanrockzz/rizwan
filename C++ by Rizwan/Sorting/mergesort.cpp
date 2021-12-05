#include <bits/stdc++.h>
using namespace std;
// MERGE SORT
// LITTLE CHANGES IN MERGE SORT GIVES COUNT INVERSION
//  BASED ON DIVIDE AND CONQUER ALGORITHM
// eg : arr[]={6,3,9,5,2,8,7,1};

void merge(int arr[], int l, int mid, int r)
{

    int n1 = mid + 1 - l;
    // int n1 = mid - l+1; (AS THE INDEX STRATING FROM O WE ARE STORING THE SIZE SO WE ADD + 1 )
    int n2 = r - mid;
    // int n2 = r - (mid+1) + 1;( TO GET SIZE ADDING + 1)

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
        if (a[i] < b[j])
        {
            arr[k] = a[i];
            k++;
            i++;
        }

        else
        {
            arr[k] = b[j];
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
}

void mergeSort(int arr[], int l, int r)
{

    if (l < r) // *
    {
        int mid = (l + r) / 2;

        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);

        merge(arr, l, mid, r);
    }
}

int main()
{
    int arr[] = {6, 3, 9, 5, 2, 8, 7, 1};
    mergeSort(arr, 0, 7);
    cout << "Your sorted array is " << endl;
    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}