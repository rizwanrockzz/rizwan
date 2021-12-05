#include <bits/stdc++.h>
using namespace std;
//  finding an element in an matrix;
//  WHOSE ROWS AND COLOUMS ARE SORTED;
int main()
{
    int n, m, target;
    cout << " enter dimensions " << endl;
    cin >> n >> m;

    cout << "Enter target " << endl;
    cin >> target;

    int mat[n][m];
    cout << " enter m1 " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }

    int r = 0, c = m - 1; // FIRST ROW AND LAST COLOUM BY SEEEING QUESTION;// ie top right corner
    bool found = false;

    while (r < n && /*  and */ c >= 0)
    {

        if (mat[r][c] == target)
        {
            found = true;
        }

        if (mat[r][c] > target)
        {
            c--;
        }
        else
        {
            r++;
        }
    }

    if (found)
    {
        cout << "element found";
    }
    else
    {
        cout << "element does not exists";
    }

    // BRUTE FORCE APPROACH
    // int targetan;
    // bool  = false;
    // cout << "target" << endl;
    // cin >> target;
    // int a[3][3];
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cin >> a[i][j];
    //     }

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         if (a[i][j] == target)
    //         {
    //             ans = true;
    //         }
    //     }
    // }
    // if (ans)
    // {
    //     cout << target << "is found " << endl;
    // }
    // else
    // {
    //     cout << target << "is not found " << endl;
    // }

    return 0;
}