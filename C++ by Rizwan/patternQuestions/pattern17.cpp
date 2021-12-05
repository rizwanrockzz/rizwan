#include <iostream>
using namespace std;
// HOLLOW DIAMOND IN A RECTANGLE PATTERN
int main()
{
    int n;
    cout << "enter n" << endl;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if (j == 1 || j == 2 * i - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if (j == 1 || j == 2 * i - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }

        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}