// #include <bits/stdc++.h>
// using namespace std;
// // POSTFIX EXPRESSION SOLUTION USING STACK
// // "4 6 + 2 / 5 * 7 +"
// // TIME COMPLEXITY = O(L)  WHERE L IS THE LENGTH OF STRING

// int postfixEvaluation(string s)
// {
//     stack<int> st;

//     for (int i = 0; i < s.length(); i++)
//     {
//         if (s[i] >= '0' && s[i] <= '9')
//         {
//             st.push(s[i] - '0');
//         }
//         // should be added to code if given spaces in input
//         // else if (s[i] == ' ')
//         // {
//         //     continue;
//         // }
//         else
//         {
//             int op2 = st.top();
//             st.pop();
//             int op1 = st.top();
//             st.pop();

//             switch (s[i])
//             {
//             case '+':
//                 st.push(op1 + op2);
//                 break;
//             case '-':
//                 st.push(op1 - op2);
//                 break;
//             case '*':
//                 st.push(op1 * op2);
//                 break;
//             case '/':
//                 st.push(op1 / op2);
//                 break;
//             case '^':
//                 st.push(pow(op1, op2));
//                 break;
//             }
//         }
//     }
//     return st.top();
// }

// int main()
// {
//     cout << postfixEvaluation("4 6+ 2 / 5 * 7 + ") << endl;
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;

//Function to return precedence of operators
int prec(char c) {
	if(c == '^')
		return 3;
	else if(c == '*' || c == '/')
		return 2;
	else if(c == '+' || c == '-')
		return 1;
	else
		return -1;
}

// The main function to convert infix expression
// to postfix expression
void infixToPostfix(string s) {

	stack<char> st; //For stack operations, we are using C++ built in stack
	string result;

	for(int i = 0; i < s.length(); i++) {
		char c = s[i];

		// If the scanned character is
		// an operand, add it to output string.
		if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
			result += c;

		// If the scanned character is an
		// ‘(‘, push it to the stack.
		else if(c == '(')
			st.push('(');

		// If the scanned character is an ‘)’,
		// pop and to output string from the stack
		// until an ‘(‘ is encountered.
		else if(c == ')') {
			while(!st.empty() && st.top() != '(')
			{
				char temp = st.top();
				st.pop();
				result += temp;
			}
			st.pop();
		}

		//If an operator is scanned
		else {
			while(!st.empty() && prec(s[i]) <= prec(st.top())) {
				char temp = st.top();
				st.pop();
				result += temp;
			}
			st.push(c);
		}
	}

	// Pop all the remaining elements from the stack
	while(!st.empty()) {
		char temp = st.top();
		st.pop();
		result += temp;
	}

	cout << result << endl;
}

//Driver program to test above functions
int main() {
	string exp = "a+b*(c^d-e)^(f+g*h)-i";
	infixToPostfix(exp);
	return 0;
}

