#include <bits/stdc++.h>
using namespace std;
//  FINDING A UNIQUE NUMBER IN AN ARRAY USING BITWISE OPERATOR
//
int unique(int arr[], int n)
{
    int xorsum = 0;
    for (int i = 0; i < n; i++)
    {
        xorsum = xorsum ^ arr[i];
    }
    return xorsum;
}

int main()
{
    // int arr[] = {1, 2, 3, 4, 1, 2, 3};
    int arr[] = {2, 4, 6, 3, 4, 6, 2};

    cout << "your unique number is : " << unique(arr, 7) << endl;
    return 0;
}