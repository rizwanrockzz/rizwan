#include <bits/stdc++.h>
using namespace std;
// PRINTING ALL SUBSTRINGS USING RECURSTION;

void substr(string s, string ans)
{

    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }

    char ch = s[0];
    string ros = s.substr(1);

    substr(ros, ans);
    substr(ros, ans + ch);
}

int main()
{
    cout << " <-- your sub strings are -->" << endl;
    substr("ABC", " ");
}