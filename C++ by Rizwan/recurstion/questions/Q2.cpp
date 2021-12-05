#include <bits/stdc++.h>
using namespace std;
// REPLACENIG PI IN A STRING WITH 3.14;

void replacepi(string s)
{

    if (s.length() == 0) // it is known as base case it depends on nothing

    {
        return;
    }

    if (s[0] == 'p' && s[1] == 'i')
    {
        cout << "3.14";
        replacepi(s.substr(2));
    }

    else
    {
        cout << s[0];
        replacepi(s.substr(1));
    }
}

int main()
{

    replacepi("pippppiiiipi");
}