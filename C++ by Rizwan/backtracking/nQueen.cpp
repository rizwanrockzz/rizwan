#include <bits/stdc++.h>
using namespace std;
// THE FAMOUS N QUEEN PROBLEM;

bool isSafe(int **arr, int x, int y, int n)
{
    // CHECKING WHETHER THERE ARE ANY QUEENS IN THE COLOUM
    // for (int row = 0; row < n; row++)
    //           or
    for (int row = 0; row < x; row++)
    {
        if (arr[row][y] == 1)
        {
            return false;
        }
    }

    int row = x;
    int col = y;
    while (row >= 0 && col >= 0)
    {
        if (arr[row][col] == 1)
        {
            return false;
        }
        row--;
        col--;
    }

    row=x;
    col=y;

    while (row >= 0 && col < n)
    {

        if (arr[row][col] == 1)
        {
            return false;
        }
        row--;
        col++;
    }
    return true;
}

bool nQueen(int **arr, int x, int n) // y is not required because we just jump onto other row after placing a queen so no need to check coloums
{

    if (x >= n)
    {
        return true;
    }

    for (int col = 0; col < n; col++)
    {
        if (isSafe(arr, x, col, n))
        {
            arr[x][col] = 1;

            if (nQueen(arr, x + 1, n))
            {
                return true;
            }
            arr[x][col] = 0;         // BACKTRACKING
        }
    }
    return false;
}

int main()
{
    int n;
    cout << "Enter n : " ;
    cin >> n;

    //  DYNAMIC MEMEORY ALLOCATION
    int **arr = new int *[n]; // ALLOCATING MEMORY TO OUR ARRAY
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n]; // ALLOCATING MEMEORY TO EAND AND EVERY ELEMENT OF ARRAY
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = 0; // INITIALIZING 0
        }
    }

    cout << "Your answer is " << endl;
    if (nQueen(arr, 0, n))
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}