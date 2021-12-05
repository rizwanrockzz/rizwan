#include <bits/stdc++.h>
using namespace std;
// REMOVING DUPLICATES FROM THE STRING

string removedup(string s)
{

    if (s.length() == 0)
    {
        return " ";
    }

    char ch = s[0];
    string ans = removedup(s.substr(1));

    if (ch == ans[0])
    {
        return ans;
    }

    return (ch + ans);
}

int main()
{
    cout << " Your string after removeing duplicates is --> " << removedup("aaabbbcccdeeeff") << endl;
}