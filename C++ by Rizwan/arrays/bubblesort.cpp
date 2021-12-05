#include <iostream>
using namespace std;
// BUBBLE SORT
// REPETEDDLY SWAP TWO ADJACENT ELEMENTS IF THRY ARE IN WRONG ORDER
// WE HAVE TO DO N-1 ITRATIONS BEFORE WE GET THE RIGHT SORTED ARRAY
int main()
{

    int n;
    cout << "enter the number" << endl;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int counter = 1;
    while (counter < n)
    {
        for (int i = 0; i <n - counter; i++)
        {

            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        counter++;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}