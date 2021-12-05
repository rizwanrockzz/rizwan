#include <iostream>
using namespace std;
// SUM OF N NATURAL NUMBERS
int sum(int n)
{

    int ans = 0;
    for (int i = 1; i <= n; i++)
    {

        ans += i;
    }
    return ans;
}

int main()
{
    int n;
    cout<<"enter number"<<endl;
    cin >> n;

    cout << sum(n) << endl;

    return 0;
}