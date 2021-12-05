#include <iostream>
using namespace std;
// // BINARY SEARCH
int Binarysearch(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        int mid = (s + e) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }

        else if (arr[mid] > key)
        {
            e = mid - 1;
        }

        else
        {
            s = mid + 1;
        }
    }
    return -1;
}

int main()
{

    int n;
    cout << " enter n : ";
    cin >> n;

    int arr[n]; // in input array must be in ascending order;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << " enter key : ";
    cin >> key;

    cout << Binarysearch(arr, n, key) << endl;

    return 0;
}