#include <bits/stdc++.h>
using namespace std;
// FIRST REPEATED ELEMENT IN THE  GIVEN ARRAY;

int main()
{

    int n;
    cout << " enter n " << endl;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    //  BE VERY CAREFUL WITH CONST INT;
    // IF U CHAMGE THE VALUE IT WILL GIVE ERROR
    const int N = 100; // 1e6 means 10 to power of 6;
    int idx[N];        // idx means index;

    for (int i = 0; i < N; i++)
    {
        idx[i] = -1;
    }

    int minidx = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (idx[arr[i]] != -1)
        {
            minidx = min(minidx, idx[arr[i]]);
        }
        else
        {
            idx[arr[i]] = i;
        }
    }

    if (minidx == INT_MAX)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << minidx + 1 << endl;
        // cout << arr[minidx] << endl;

    }

    return 0;
}