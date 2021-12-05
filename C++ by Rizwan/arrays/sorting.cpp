#include <iostream>
using namespace std;
//  SORTING OF AN ARRAY IN ASCENDING FORM
int main()
{

    int n;
    cout << " enter n " << endl;
    cin >> n;

    int arr[n];
    // for (int i = 1; i <= n; i++)
    // {
    //     cin >> arr[i];
    // }

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // for (int i = 0; i < n-1; i++)
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i]) // ASCENDING ORDER
            // if (arr[j] > arr[i])  DESCENDING ORDER
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = i + 1; j <= n; j++)
    //     {
    //         if (arr[j] < arr[i])
    //         {
    //             int temp = arr[j];
    //             arr[j] = arr[i];
    //             arr[i] = temp;
    //         }
    //     }
    // }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    //  for (int i = 1; i <= n; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // cout << endl;

    return 0;
}