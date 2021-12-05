#include <bits/stdc++.h>
using namespace std;
//  PRINTING Nth FIBONACCI NUMBER USING RECURSTION;

int fib(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }

    return fib(n - 1) + fib(n - 2);
}

int main()
{

    int n;
    cout << " enter n " << endl;
    cin >> n;

    cout << " your " << n << " th fibonacci number is -->" << fib(n) << endl;
    

    // FOR COMPLETE FIBONACCI SERIES 

    // cout << "Fibonacci Series " << endl;
    // cout << "------------------" << endl;

    // for (int i = 0; i <= n; i++)
    // {
    //     cout << fib(i) << endl;
    // }

    return 0;
}