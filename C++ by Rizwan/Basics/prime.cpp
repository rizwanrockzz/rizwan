#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int n;
    cout << "enter the number" << endl;
    cin >> n;

    bool flag = 0;

    for (int i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << "non prime";
            flag = 0;
            break;
        }
    }

    if (flag == 1)
    {
        cout << " prime ";
    }

    return 0;
}