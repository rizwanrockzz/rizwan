#include <iostream>
using namespace std;
// FLOYD'S TRIANGLE 
int main()
{
    int n;
    cout << "enter n" << endl;
    cin >> n;

    int count = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }

    return 0;
}