#include <bits/stdc++.h>
using namespace std;
// COUNT OF NO OF WAYS FOR GOING FROM START TO END IN A BOARD GAME;

int board(int s, int e)
{

    if (s == e)
    {
        return 1;
    }
    if (s > e)
    {
        return 0;
    }

    int count = 0;

    for (int i = 1; i <= 6; i++)
    {
        count += board(s + i, e);
    }

    return count;
}

int main()
{
    cout << " your all possible outcomes are " << board(0, 3) << endl;
}