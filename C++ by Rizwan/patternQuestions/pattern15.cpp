#include <iostream>
using namespace std;
// PASCAL'S TRIANGLE
//  SIMILAR CODE IN FUNCTIONS NCR
int fact(int n)
{
    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }
    return factorial;
}

int main()
{
    int n;
    cout << "enter n" << endl;
    cin >> n;

    // 1
    // 1 1
    // 1 2 1
    // 1 3 3 1
    // 1 4 6 4 1

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }

        // BESIDE USING FACTORIAL AS A FUNCTION YOU CAN USE nCr FORMULA WHICH REDUCES STEPS

        for (int j = 0; j <= i; j++)
        {
            cout << fact(i) / (fact(j) * fact(i - j)) << " ";
        }
        cout << endl;
    }

    return 0;
}
