#include <bits/stdc++.h>
using namespace std;
// PRINTING SLL POSSIBLE SUBSTRINGS USING RECURSTION;

void permutation(string s, string ans)
{

    if (s.length() == 0)
    { 
        cout << ans << endl;
        return;
    }

    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        string ros = s.substr(0, i) + s.substr(i + 1);
        // s.substr(0, i) DENOTES THE STRING BEFORE CHOSEN LETTER ;
        //  s.substr(i + 1) DENOTES THE STRING AFTER CHOSEN LETTER

        permutation(ros, ans + ch);
    }
}

int main()
{
    cout << " <-- Your all possible permutations are --> " << endl;
    permutation("ABC", " ");
}