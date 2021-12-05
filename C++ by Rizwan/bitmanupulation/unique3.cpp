#include <bits/stdc++.h>
using namespace std;
//  FINDING A UNIQUE NUMBER IN AN ARRAY WHICH HAS THREE DUPLICATE NUMBERS

bool getBit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}

int setBit(int n, int pos)
{
    return (n | (1 << pos));
}

int unique(int arr[], int n)

{
    int result = 0;

    for (int i = 0; i < 64; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            if (getBit(arr[j], i))
            {
                sum++;
            }
        }

        if (sum % 3 != 0)
        {
            result = setBit(result, i);
        }
    }
    return result;
}

int main()
{

    int arr[] = {1, 2, 3, 4, 1, 2, 3, 1, 2, 3};
    cout << "your unique number is : " << unique(arr, 10) << endl;

    return 0;
}