#include <bits/stdc++.h>
using namespace std;
// PRINTING AND FINDING IN A MATIX USING 2D ARRAY
int main()
{

    int n, m, x;
    cout << " enter numbers " << endl;
    cin >> n >> m >> x;

    cout << endl;
    cout << endl;

    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << endl;
    cout << endl;

    cout << "the matrix is" << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
    cout << endl;

    bool flag = false;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == x)
            {
                cout << i << " " << j << endl;
                flag = true;
            }
        }
    }
    cout << endl;
    cout << endl;

    if (flag)
    {
        cout << "element is found";
    }
    else
    {
        cout << "element is not found";
    }

    return 0;
}