#include <bits/stdc++.h>
using namespace std;
// CHECKING THE LARGEST WORD IN THE SENTENCE

int main()
{
    // int n;
    // // cout << "Enter n" << endl;
    // cin >> n;
    // cin.ignore();

    // char arr[n + 1];
    // // cout << "Enter Character Array " << endl;
    // cin.getline(arr, n); // INPUTS THE WHOLE SENTENCE WITH SPACES
    // cin.ignore();        // CLEARS THE BUFFER

    // int i = 0;
    // int currlen = 0, maxlen = 0;
    // int st = 0, maxst = 0;

    // while (true)
    // {
    //     if (arr[i] == ' ' || arr[i] == '\0')
    //     {
    //         if (currlen > maxlen)
    //         {
    //             maxlen = currlen;
    //             maxst = st;
    //         }
    //         currlen = 0;
    //         st = i + 1;
    //     }

    //     else
    //     {
    //         currlen++;
    //     }

    //     if (arr[i] = '\0')
    //     {
    //         break;
    //     }

    //     i++;
    // }

    // cout << maxlen << endl;
    // // cout << arr << endl;

    // for (int i = 0; i < maxlen; i++)
    // {
    //     cout << arr[i + maxst];
    // }
    // // cout << endl;

    // return 0;

    int n;
    cin >> n;
    cin.ignore();
    char arr[n + 1];
    cin.getline(arr, n);
    cin.ignore();
    int i = 0;
    int currentLength = 0;
    int maxLength = 0;
    int st = 0;
    int maxst = 0;
    int start = 0;
    while (true)
    {
        if (arr[i] == ' ' || arr[i] == '\0')
        {
            if (currentLength > maxLength)
            {
                maxLength = currentLength;
                maxst = i;
                start = i - maxLength;
                // cout<<start<<" "<<maxst<<endl;
            }
            // start = i - maxLength;
            currentLength = 0;
            // st = i+1;
        }
        else
        {
            currentLength += 1;
        }
        if (arr[i] == '\0')
        {
            break;
        }
        i += 1;
    }
    cout << maxLength << endl;
    for (int i = start; i < maxst; i++)
    {
        cout << arr[i];
    }
    return 0;
}
