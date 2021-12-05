#include <iostream>
using namespace std;
// HALF PYRAMID AFTER 180 DEGREE ROTATION
int main()
{
    int n;
    cout << "enter n" << endl;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j <= n - i)
            {
                cout << "   ";
            }
            else
            {
                cout << " * ";
            }
        }
        cout << endl;
    }

    return 0;
}