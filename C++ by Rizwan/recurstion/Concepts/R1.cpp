#include <bits/stdc++.h>
using namespace std;
//  SUM OF N ELEMENTS USING RECURSTION
//  RECURSTION MEANS THE FUNCTION CALLS IT AGAIN AND AGAIN TO SHOTRT THE  PROBLEM;

int sum(int n)
{

    if (n == 0)
    {
        return 0;
    }

    int prevsum = sum(n - 1);

    return n + prevsum;
}

int main()
{

    int n;
    cout << " enter n " << endl;
    cin >> n;

    cout << "your sum using recursion method is : " << sum(n) << endl;
    return 0;
}