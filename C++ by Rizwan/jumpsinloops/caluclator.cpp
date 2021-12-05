#include <iostream>
using namespace std;
// simple caluclator using switch
int main()
{
    float n1, n2;
    cout << "input 2 numbers" << endl;
    cin >> n1 >> n2;

    char op;
    cout << "enter a character" << endl;
    cin >> op;

    switch (op)
    {

    case '+':
        cout << n1 + n2 << endl;
        break;
    case '-':
        cout << n1 - n2 << endl;
        break;
    case '*':
        cout << n1 * n2 << endl;
        break;
    case '/':
        cout << n1 / n2 << endl;
        break;

    default:
        cout << "enter other operator" << endl;

        break;
    }

    return 0;
}