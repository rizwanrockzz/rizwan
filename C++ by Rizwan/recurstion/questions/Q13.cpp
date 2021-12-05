#include <bits/stdc++.h>
using namespace std;
//  PAIRING GIVEN FRIENDS OR LEAVING SOMEONE SINGLE AND COUNTING NO OF WAYS USING RECURSTION;

int friendspairing(int n)
{

    if (n == 0 || n == 1 || n == 2)
    {
        return n;
    }

    return (friendspairing(n - 1) + friendspairing(n - 2) * (n - 1));

    // BEFORE '+' SIGN WE WROTE N-1 BECAUSE WE LEFT N AS SINGLE
    // AFTER '+' SIGN WE WROTE (N-2)*(N-1) BECAUSE WE DIDNT LEFT ANYONE AS SINGLE AND WE HAVE (N-1) WAYS FOR PAIRING (N-2) FRIENDS;
}

int main()
{

    int n;
    cout << " Enter total no of friends n : ";
    cin >> n;

    cout << friendspairing(n) << endl;

    return 0;
}