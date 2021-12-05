#include <iostream>
using namespace std;
// RHOMBUS STARS
int main()
{
    int n;
    cout << "enter n" << endl;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "   ";
        }
        for (int j = 1; j <= n; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }

    return 0;
}