#include <iostream>
#include <cmath>
using namespace std;
//  DECIMAL TO BINARY
int decimaltobinary(int n)
{

    int ans = 0;
    int x = 1;

    while (x <= n)
    {

        x *= 2;
    }
    x = x / 2;

    while (x > 0)
    {
        int lastdigit = n / x;
        n -= lastdigit * x;
        x /= 2;
        ans = ans * 10 + lastdigit; // to get the numbers in correct units place we write *10;
    }

    return ans;

    // int i = 0,multiplier=1;
    // int bin = 0;
    // while (n > 0)
    // {
    //     int rem = n % 2;
    //     bin = bin + rem * pow(10, i);
    //     n = n / 2;
    //     i++;
    // }
    //    or
    // while (n > 0)
    // {
    //     int rem = n % 2;
    //     bin = bin + rem *multiplier;
    //     n = n / 2;
    //     multiplier*10
    // }
    // return bin;
}

int main()
{
    int n;
    cout << "enter number" << endl;
    cin >> n;

    cout << decimaltobinary(n) << endl;

    return 0;
}