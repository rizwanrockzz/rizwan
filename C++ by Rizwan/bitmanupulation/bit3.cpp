#include <bits/stdc++.h>
using namespace std;
// TO FIND NO OF ONES(1) IN A BINARY CODE USING BIT MANUPULATION;

int numberofones(int n)
{
    int count = 0;
    // for n upto zero in a while loop we can write as (n) or (n>0) or (n!=0);
    while (n != 0)
    {
        n = n & (n - 1);
        count++;
    }

    return count;
}

int main()
{
    int n;
    cout << " enter n : " << endl;
    cin >> n;

    cout << "The number of  ones in n is : " << numberofones(n) << endl;

    return 0;
}