#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << endl;

    // spiral order

    int row_start = 0, row_end = n - 1, coloum_start = 0, coloum_end = m - 1;

    while (row_start <= row_end && coloum_start <= coloum_end)
    {
        // for row_start
        for (int col = coloum_start; col <= coloum_end; col++)
        {
            cout << arr[row_start][col] << " ";
        }
        cout << endl;

        row_start++;

        // for coloum_end
        for (int row = row_start; row <= row_end; row++)
        {
            cout << arr[row][coloum_end] << " ";
        }
        coloum_end--;

        // for row_end
        for (int col = coloum_end; col >= coloum_start; col--)
        {
            cout << arr[row_end][col] << " ";
        }
        cout << endl;
        row_end--;

        // for coloum_start
        for (int row = row_end; row >= row_start; row--)
        {
            cout << arr[row][coloum_start] << " ";
        }
        cout << endl;
        coloum_start++;
    }

    return 0;
}