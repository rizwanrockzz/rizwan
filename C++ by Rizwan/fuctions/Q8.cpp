#include <iostream>
using namespace std;
//  DECIMAL TO HEXADECIMAL
string decimaltohexadecimal(int n)
{
    int x = 1;
    string ans = "";
    while (x <= n)
    {
        x *= 16;
    }
    x /= 16;
    while (x > 0)
    {
        int lastdigit = n / x;
        n -= lastdigit * x;
        x /= 16;

        if (lastdigit <= 9)
        {
            ans = ans + to_string(lastdigit);
            // HERE WE ARE JUST SHOWING THE CHARACTERS AND NOT ADDING
            // IN PREVIOUS BINARY AND OCTAL WE ARE MULTIPLYING WITH 10
        }
        else
        {
            char c = 'A' + lastdigit - 10;
            // THE MEANING OF ABOVE LINE OF CODE IS
            // IF WE DONOT GET LESS THAN 9 WE CAME TO ELSE AND
            // FOR EXAMPLE IF X=11 THEN WE SUBTRACT 10 FROM 11 WE GET 1
            // IF WE ADD 1 TO THE 'A' STRING WE GET 'B' ANS SON ON

            ans.push_back(c);
        }
    }
    return ans;
}

int main()
{
    int n;
    cout << "enter number" << endl;
    cin >> n;

    cout << decimaltohexadecimal(n) << endl;

    return 0;
}