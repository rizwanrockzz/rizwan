#include <bits/stdc++.h>
using namespace std;
//  TRANSPOSE OF A MATRIX
int main()
{
    // int A[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // // int n, m, i, j;
    // // cout << "Enter n an m " << endl;
    // // cin >> n >> m;

    // // int A[n][m];
    // // for (int i = 0; i < n; i++)
    // // {
    // //     for (int j = 0; j < m; j++)
    // //     {
    // //         cin >> A[i][j];
    // //     }
    // // }

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = i; j < 3; j++) // FOR TRANSPOSE CHANGING UPPER AND LOWER TRIANGULAR MATRIX FOR IT THE  COLOUMS SHOULD BE GREATER THAN ROWS SO WE WRITE J=1 IN NESTED LOOP;
    //     {                           // swap;
    //         int temp = A[i][j];
    //         A[i][j] = A[j][i];
    //         A[j][i] = temp;
    //     }
    // }
    // //  print
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << A[i][j] << "  ";
    //     }
    //     cout << endl;
    // }

    //  TRANSPOSE OF A MATRIX
    int arr[10][10], transpose[10][10], row, col;
    cin >> row >> col;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            transpose[j][i] = arr[i][j];
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << transpose[i][j];
        }
        cout << endl;
    }

    return 0;
}