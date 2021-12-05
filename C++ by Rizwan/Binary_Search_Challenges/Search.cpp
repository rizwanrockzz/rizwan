#include <bits/stdc++.h>
using namespace std;
// SEARCH IN A SORTED AND ROTATED ARRAY

int searchInARotatedArray(int arr[], int key, int left, int right)
{
    if (left > right)
    {
        return -1;
    }

    int mid = (left + right) / 2;

    if (arr[mid] == key)
    {
        return mid;
    }

    if (arr[left] >= arr[mid])
    {
        if (key >= arr[left] && key <= arr[mid])
        {
            return searchInARotatedArray(arr, key, left, mid - 1);
        }
        return searchInARotatedArray(arr, key, mid + 1, right);
    }

    if (key >= arr[mid] && key <= arr[right])
    {
        return searchInARotatedArray(arr, key, mid + 1, right);
    }

    return searchInARotatedArray(arr, key, left, mid - 1);
}

int main()
{

    int arr[] = {6, 7, 8, 9, 10, 1, 2, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 8;

    int idx = searchInARotatedArray(arr, key, 0, n - 1);
    if (idx == -1)
    {
        cout << "Key doesn't exists" << endl;
    }
    else
    {
        cout << "Key exists at index = " << idx << endl;
    }

    return 0;
}