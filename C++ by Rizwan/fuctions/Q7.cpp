#include <iostream>
using namespace std;
//  DECIMAL TO OCTAL
int decimaltooctal(int n)
{

    int ans = 0;
    int x = 1;
    {
        while (x <= n)

            x *= 8;
        x /= 8;
    }
    while (x > 0)
    {
        int lastdigit = n / x;
        n -= lastdigit * x;
        x /= 8;
        ans = ans * 10 + lastdigit; // to get the numbers in correct units place we write *10;
    }

    return ans;
}

int main()
{
    int n;
    cout << "enter number" << endl;
    cin >> n;

    cout << decimaltooctal(n) << endl;

    return 0;
}