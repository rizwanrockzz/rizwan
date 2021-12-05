#include <bits/stdc++.h>
using namespace std;
//  FACTORIAL OF N NUMBER USING RECURSTON;

int factorial(int n)
{

    if (n == 0)
    {
        return 1;
    }

    int prevfactorial = factorial(n - 1);
    return n * prevfactorial;
}

int main()
{

    int n;
    cout << " enter n " << endl;
    cin >> n;

    cout << n << " Factorial is --> " << factorial(n) << endl;

    return 0;
}