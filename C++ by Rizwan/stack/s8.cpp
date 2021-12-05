#include <bits/stdc++.h>
#include <stack>
using namespace std;
// Balanced Parenthesis

bool isValid(string s)
{
    stack<char> st;
    bool ans = true;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(' or s[i] == '{' or s[i] == '[')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            if (st.top() == '(' and !st.empty())
            // if (!st.empty() and st.top() == '(')
            {
                st.pop();
            }
            else
            {
                ans = false;
                break;
            }
        }

        else if (s[i] == ']')
        {
            if (st.top() == '[' and !st.empty())
            // if (!st.empty() and st.top() == '[')
            {
                st.pop();
            }
            else
            {
                ans = false;
                break;
            }
        }
        else if (s[i] == '}')
        {
            if (st.top() == '{' and !st.empty())
            // if (!st.empty() and st.top() == '{')
            {
                st.pop();
            }
            else
            {
                ans = false;
                break;
            }
        }
    }
    if (!st.empty())
    {
        return false;
    }
    return ans;
}

int main()
{
    string s = "{[()]}"; // valid string
    // string s = "{[()]"; // invalid string

    if (isValid(s))
    {
        cout << "Valid String " << endl;
    }
    else
    {
        cout << "Invalid String " << endl;
    }

    return 0;
}