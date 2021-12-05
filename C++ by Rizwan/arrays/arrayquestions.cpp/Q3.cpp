#include <bits/stdc++.h>
using namespace std;
// LONGEST ARTHEMATIC SUBARRAY

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

    cout << endl;
    cout << endl;
    //    ARTHEMATIC ARRAY IS AN ARRAY THAT IS A SUBARRAY HAVING SAME COMMON DIFFERENCE AS IN ARHEMATIC PROGRESSION
    int ans = 2;              // 2 BECAUSE EVERY TWO ELMENTS ARE ALWAYS ARTHEMATIC ARRAYS AND THEIR DIFF IS ALWAYS 1
    int pd = arr[1] - arr[0]; // PREVIOUS COMMON DIFFERENCE
    int j = 2;                // BECAUSE EVERY FIRST TWO NUMBERS ARE ALWAYS IN ARTHEMATIC SUBARRAYS
    int curr = 2;

    while (j < n)
    {
        if (pd == arr[j] - arr[j - 1])  //  IN 1 SEC = 10POW(8) OPERATIONS ARE DONE APPROX 
        {
            curr++;
        }

        else
        {
            pd = arr[j] - arr[j - 1];
            curr = 2;
        }

        ans = max(ans, curr);
        j++;
    }

    cout << "your answer is " << ans << endl;

    return 0;
}
