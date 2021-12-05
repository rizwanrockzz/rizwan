#include <bits/stdc++.h>
using namespace std;
// PRINTING ALL POSSIBLE OUTCOMES ON TWO NUMBERS OF A KEYPAD PHONE;

string keypadarr[] = {"", "", "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"};

void keypad(string s, string ans)
{

    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }

    char ch = s[0];
    string code = keypadarr[ch - '0'];
    string ros = s.substr(1);

    for (int i = 0; i < code.length(); i++)
    {
        keypad(ros, ans + code[i]);
    }
}

int main()
{
    cout << " <-- your all possible outcomes  are -->" << endl;
    keypad("23", " ");
}