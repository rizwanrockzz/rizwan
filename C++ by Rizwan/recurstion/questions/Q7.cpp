#include <bits/stdc++.h>
using namespace std;
// PRINTING ALL SUBSTRINGS ALONG WITH THEIR ASCII VALUES USING RECURSTION;

void substr(string s, string ans)
{

    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }

    char ch = s[0];
    int code = ch;
    string ros = s.substr(1);

    substr(ros, ans);
    substr(ros, ans + ch);
    substr(ros, ans + to_string(code)); //as the ascci code is in int so we have to convert it in to string so we use this function
}

int main()
{
    cout << " <-- your sub strings along with ASCCI codes are -->" << endl;
    substr("AB", " ");
}