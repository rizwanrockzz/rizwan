#include <iostream>
using namespace std;
// PALINDROMIC PATTERN
int main()
{
    int n;
    cout << "enter n" << endl;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int j;
        for (j = 1; j <= n - i; j++)
        {
            cout << "   ";
        }
        int k = i;
        for (; j <= n; j++) //if u wanna continue fron where u stop then use this tyoe of code;
        {
            cout << k--<<"  ";
        }
        k = 2;
        for (; j <= n + i - 1; j++)
        {
            cout << k++<<"  ";
        }

        cout << endl;
    }

    return 0;
}