#include <bits/stdc++.h>
using namespace std;
// CHECKING WHETHER A WORD IS PALINDROME
int main()
{
    int n;
    cout << " enter n " << endl;
    cin >> n;

    char arr[n + 1];
    cout << "Enter a character array " << endl;
    cin >> arr;

    bool check = 1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[n - 1 - i])
        {
            check = 0;
            break;
        }
    }

    if (check == 1)
    {
        cout << "Word " << arr << "  is a palindrome";
    }
    else
    {
        cout << "Word " << arr << " is not a palindrome" << endl;
        cout << "Enter a better word " << endl;
    }

    return 0;
}