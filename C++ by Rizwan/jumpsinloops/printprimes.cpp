#include <iostream>
using namespace std;
// print prime numbers between two given numbers
int main()
{
    int a, b;
    cout << "enter a and b" << endl;
    cin >> a >> b;

    for (int num = a; num <= b; num++)
    {
        int i;
        for (i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                break;
            }
        }
        if (i == num)
        {
            cout << num << endl;
        }
    }

    return 0;
}