#include <bits/stdc++.h>
using namespace std;
// IN THIS QUESTION arr[i] SHOULD BE GREATER THAN PREVIOUS ELEMENTS AND
// arr[i] > arr[i+1];  THEN THE QUESTION IS COMPLETED
// Q: RECORD BREAKING DAY

int main()
{
    int n;
    cout << " enter n " << endl;
    cin >> n;

    int arr[n + 1];
    arr[n] = -1;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << endl;
    cout << endl;

    if (n == 1)
    {
        cout << "1" << endl;
        return 0;
    }

    int ans = 0;
    int mx = -1; // OR WE CAN ALSO WRITE INT_MIN AS THIS QUESTION HAS NO OF VISITORS SO VISITORS CANT BE NEGATIVE SO WE TAKE MIN NUMBER AS -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > mx && arr[i] > arr[i + 1])
        {
            ans++;
        }

        mx = max(mx, arr[i]);
    }

    cout << "The number of record breaking days are " << ans << endl;

    return 0;
}
