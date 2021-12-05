#include <bits/stdc++.h>
using namespace std;

int getbit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}

int setbit(int n, int pos)
{
    return (n | (1 << pos));
}

int clearbit(int n, int pos)
{
    int mask = ~(1 << pos);
    return (n & mask);
}

int updatebit(int n, int pos, int value)
{
    // UPDATEBIT=CLEARBIT+SETBIT;
    int mask = ~(1 << pos);
    n = n & mask;
    return (n | (value << pos));
}

int main()
{

    cout << "your getbit ans is : " << getbit(5, 2) << endl;
    cout << "your setbit ans is : " << setbit(5, 1) << endl;
    cout << "your clearbit ans is : " << clearbit(5, 2) << endl;
    cout << "your updatebit ans is : " << updatebit(5, 3, 1) << endl;

    return 0;
}