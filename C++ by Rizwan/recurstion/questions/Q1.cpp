#include <bits/stdc++.h>
using namespace std;
//  REVERSE A STRING USING RECURSTION;

void reverse(string s)
{

    if (s.length() == 0)
    {
        return;
    }
    // ros=rest of string;
    string ros = s.substr(1);

    reverse(ros);
    cout << s[0];
}

int main()
{
    string s;
    cout << "Enter the string" << endl;
    cin >> s;
    //      or directly we can call name in the string ;
    // reverse("binod");

    cout << "Your revrse string is -->" << endl;
    reverse(s);
    return 0;
}