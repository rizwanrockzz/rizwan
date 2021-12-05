#include <bits/stdc++.h>
using namespace std;
// COUNT OF NO OF WAYS FOR GOING FROM START TO END IN A MAZE ;

int maze(int n, int i, int j)
{

    if (i == n - 1 && j == n - 1)
    {
        return 1;
    }
    if (i >= n || j >= n)
    {
        return 0;
    }

    return (maze(n , i + 1, j) + maze(n , i, j + 1)); // THIS WILL GIVE ALL POSSIBLE PATHS COVERED FOR I AND ALL POSSIBLE PATHS COVERED FOR J;
}

int main()
{
    cout << " your all possible outcomes are " << maze(3, 0, 0) << endl;
}