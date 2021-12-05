#include <bits/stdc++.h>
using namespace std;
// TO CHECK WHEATHER AN ARRAY IS SORTED OR NOT USING RECURSTION;

bool sorted(int arr[], int n)
{

    if (n == 1)
    {
        return true;
    }

    int restarray = sorted(arr + 1, n - 1);

    // YOU CAN WRITE EITHER IF STATEMENT OR DIRECT  RETURN STATEMENT;
    // if (arr[0] < arr[1] && restarray)
    // {
    //     return true;
    // }

    return (arr[0] < arr[1] && restarray);
}

int main()
{
    //     OR DIRECT YOUCAN DECLARE N AND ARRAY;
    int n;

    cout << "enter n : " << endl;
    cin >> n;

    int arr[n];
    cout << "enter array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << sorted(arr, n) << endl;

    return 0;
}