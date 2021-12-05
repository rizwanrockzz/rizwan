#include <iostream>
using namespace std;
// prime number divisible by 1 and itself
// prime or not
int main()
{
    int n;
    cout << "enter n" << endl;
    cin >> n;

    int i;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "non prime" << endl;
            break;
        }
    }

    if (i == n)
    {
        cout << "prime" << endl;
    }

    return 0;
}