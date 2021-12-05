#include <iostream>
using namespace std;
// ZIGZAG PATTERN
int main()
{
    int n;
    cout << "enter n" << endl;
    cin >> n;

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (((i + j) % 4 == 0) || (i == 2 && j % 4 == 0))
            // you shouldnt forget to give two equal to symbols
            {
                cout << " * ";
            }
            else
            {
                cout << "   ";
            }
        }
        cout << endl;
    }

    return 0;
}