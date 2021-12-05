#include <bits/stdc++.h>
using namespace std;
// PAIRS SUM IS EQUAL TO THE KEY;


//  JUST VERIFICATIION

// bool pairsum(int arr[], int n, int k)
// {

//     // for (int i = 0; i < n ; i++)

//     // or

//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[i] + arr[j] == k)
//             {
//                 cout << i << " " << j << endl;
//                 return true;
//             }
//         }
//     }
//     return false;
// }

int pairsum(int arr[], int n, int key)
{
    int low = 0;
    int high = n - 1;
// ONLY USEFUL FOR SORTED ARRAY
    while (low < high)
    {
        if (arr[low] + arr[high] == key)
        {
            cout << arr[low] << " " << arr[high] << endl;
            return true;
        }
        else if (arr[low] + arr[high] > key)
        {
            high--;
        }

        else
        {
            low++;
        }
    }
    return false;
}

int main()
{

    int arr[] = {2, 4, 7, 11, 14, 16, 20, 21};
    int key = 31;

    cout << pairsum(arr, 8, key) << endl;

    return 0;
}