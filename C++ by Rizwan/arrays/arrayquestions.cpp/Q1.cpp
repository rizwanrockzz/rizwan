#include <iostream>
#include <string>
using namespace std;

// MAXIMUM ARRAY TILL I;

int main()
{
    int mx = INT_MIN; // OR WE CAN GIVE ANY RANDOM VALUE SUCH AS -199999999 etc
    int n;
    cout << " enter n " << endl;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    //    ALGORITHM STARTS FROM HERE
    for (int i = 0; i < n; i++)
    {
        mx = max(mx, arr[i]);
        cout << "your maximum element is " << mx << endl;
    }
    // cout << mx << endl;

    return 0;
}