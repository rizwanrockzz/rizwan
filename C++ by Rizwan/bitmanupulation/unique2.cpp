#include <bits/stdc++.h>
using namespace std;
//  FINDING 2 UNIQUE NUMBER IN AN ARRAY USING BITWISE OPERATOR

int getBit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}

void unique(int arr[], int n)
{

    int xorsum = 0;
    for (int i = 0; i < n; i++)
    {
        xorsum = xorsum ^ arr[i];
    }

    int tempxor = xorsum;
    int setbit = 0;
    int pos = 0;

    while (setbit != 1)
    {
        setbit = xorsum & 1; // WE WILL GET THE LAST BIT OF THE XORSUM EG : IN 0010 AFTER DOING AND OPERATION WE WILL GET 0 THIS IS MEANING OF IT
        pos++;
        xorsum = xorsum >> 1;
    }
    int newxor = 0;

    for (int i = 0; i < n; i++)
    {
        if (getBit(arr[i], pos - 1))
        {
            newxor = newxor ^ arr[i];
        }
    }

    cout << "your first unique number is : " << newxor << endl;
    cout << "your second unique number is : " << (tempxor ^ newxor) << endl;
}

int main()
{
    int arr[] = {1,2,3,1,2};
    unique(arr, 5);

    return 0;
}