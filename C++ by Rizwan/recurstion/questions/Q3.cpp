#include <bits/stdc++.h>
using namespace std;
// TOWER OF HANOI;

void towerofhanoi(int n, char src, char des, char helper)
{

    if (n == 0)
    {
        return;
    }

    towerofhanoi(n - 1, src, helper, des);
    cout << "Move from " << src << " to " << des << endl;
    towerofhanoi(n - 1, helper, des, src);
}

int main()
{
    towerofhanoi(5, 'A', 'C', 'B');
}