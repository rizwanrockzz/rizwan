#include <bits/stdc++.h>
using namespace std;
//  MATRIX MULTIPLICATION ;
//  little bit important
int main()
{
    int n1, n2, n3;
    cout << "enter nums " << endl;
    cin >> n1 >> n2 >> n3;

    int m1[n1][n2];
    int m2[n2][n3];
    int ans[n1][n3];

    cout << "enter m1 " << endl;
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cin >> m1[i][j];
        }
    }
    cout << "enter m2" << endl;
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cin >> m2[i][j];
        }
    }

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            ans[i][j] = 0;
        }
    }

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            // ans[i][j] = 0;
            for (int k = 0; k < n2; k++)
            {
                ans[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }

    cout << "Your resultant matrix is :" << endl;
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}