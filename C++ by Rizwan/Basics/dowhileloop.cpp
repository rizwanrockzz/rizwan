#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter n" << endl;
    cin >> n;

    do
    {
        cout << n << endl;
        cin >> n;

    } while (n > 0);

    return 0;
}