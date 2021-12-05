#include <bits/stdc++.h>
using namespace std;
// CONVERTING INFIX TO PREFIX

int precidence(char c)
{
    if (c == '^')
    {
        return 3;
    }
    else if (c == '*' || c == '/')
    {
        return 2;
    }
    else if (c == '+' || c == '-')
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

string infixtoprefix(string s)
{
    reverse(s.begin(), s.end());
    stack<char> st;
    string result;

    for (int i = 0; i < s.length(); i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') && (s[i] >= '0' && s[i] <= '9'))
        {
            result += s[i];
        }

        else if (s[i] == ')')
        {
            st.push(s[i]);
        }

        else if (s[i] == '(')
        {
            while (!st.empty() && st.top() != ')')
            {
                result += st.top();
                st.pop();
            }
            if (!st.empty())
            {
                st.pop(); // removing the opening bracket '('
            }
            // st.pop();
        }
        else
        {
            // while (!st.empty() && (precidence(s[i]) <= precidence(st.top()))
            while (!st.empty() && (precidence(st.top()) >= precidence(s[i])))
            {
                result += st.top();
                st.pop();
            }
            st.push(s[i]); // pushing the operator which has less precidence
        }
    }
    while (!st.empty())
    {
        result += st.top();
        st.pop();
    }
    reverse(result.begin(), result.end());
    return result;
}

int main()
{
    // (a-b/c)*(a/k-l)
    cout << infixtoprefix("a+b*(c^d-e)^(f+g*h)-i") << endl;

    return 0;
}
// ques1 : "a+b*(c^d-e)^(f+g*h)-i"
// Ans1 : +a-*b^-^cde+f*ghi
