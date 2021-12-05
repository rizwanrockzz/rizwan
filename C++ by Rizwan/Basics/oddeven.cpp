#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "enter the number" << endl;
    cin >> n;

    if (n % 2 == 0)
    {
        cout << "even" << endl;
    }
    else
    {
        cout << "odd" << endl;
    }

    return 0;
}