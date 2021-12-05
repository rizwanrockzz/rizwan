#include <bits/stdc++.h>
#include <vector>
using namespace std;
// FORM NUMBER SHOULD BE DIVISIBLE BY 3

void computeNumberFromSubArray(vector<int> arr, int k)
{
    int sum = 0;
    pair<int, int> ans;
    bool found = false;

    for (int i = 0; i < k; i++)
    {
        sum += arr[i];
    }

    if (sum % 3 == 0)
    {
        found = true;
        ans = make_pair(0, k - 1);
    }

    for (int j = k; j < arr.size(); j++)
    {
        if (found)
        {
            break;
        }

        sum = sum + arr[j] - arr[j - k];

        if (sum % 3 == 0)
        {
            found = true;
            ans = make_pair(j - k + 1, j);
        }
    }

    if (!found)
    {
        ans = make_pair(-1, 0);
    }

    if (ans.first == -1)
    {
        cout << "No such SubArray exists" << endl;
    }
    else
    {
        for (int i = ans.first; i <= ans.second; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    vector<int> arr={84,23,45,12,56,82};
    int k=3;

    computeNumberFromSubArray(arr,k);

    return 0;
}