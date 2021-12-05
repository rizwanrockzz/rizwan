#include <iostream>
using namespace std;

int main()
{
    char button;
    cout << "input a character: ";
    cin >> button;

    // if (button == 'a')
    // {
    //     cout << "hello" << endl;
    // }
    // else if (button == 'b')
    // {
    //     cout << "namaste" << endl;
    // }
    // else if (button == 'c')
    // {
    //     cout << "hola" << endl;
    // }
    // else if (button == 'd')
    // {
    //     cout << "salut" << endl;
    // }
    // else if (button == 'e')
    // {
    //     cout << "ciao" << endl;
    // }
    // else
    // {
    //     cout << "i am still learning " << endl;
    // };
    switch (button)
    {
    case 'a':
        cout << "hello" << endl;

        break;
    case 'b':
        cout << "namaste" << endl;

        break;

    case 'c':
        cout << "hola" << endl;

        break;
    case 'd':
        cout << "ciao" << endl;

        break;
    case 'e':
        cout << "salute" << endl;

        break;

    default:
        cout << "i am still learning" << endl;
        break;
    }

    return 0;
}