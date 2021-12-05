#include <bits/stdc++.h>
using namespace std;
// PAGE ALLOCATION PROBLEM

bool isPossible(int arr[], int n, int m, int curr_min)
{
    int studentsRequired = 1, sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > curr_min)
        {
            return false;
        }
        if (sum + arr[i] > curr_min)
        {
            sum = arr[i];
            studentsRequired++;

            if (studentsRequired > m)
            {
                return false;
            }
        }
        else
        {
            sum += arr[i];
        }
    }
    return true;
}

int allocateMinimumPages(int arr[], int n, int m)
{
    int sum = 0;
    if (n < m)
    {
        return -1;
    }

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int start = 0, end = sum, ans = INT_MAX;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (isPossible(arr, n, m, mid))
        {
            // ans = min(ans, mid);
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
}

int main()
{
    //Number of pages in books
    int arr[] = {10,20,30,40};
    // int arr[] = {12, 34, 67, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    int m = 2; //No. of students

    cout << "Minimum number of pages = " << allocateMinimumPages(arr, n, m) << endl;
    return 0;
}