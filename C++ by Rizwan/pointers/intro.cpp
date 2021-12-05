#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 10;
    int *aptr = &a; // ---> int *aptr;
    //                      aptr=&a;

    cout << "This is the value of &a  :" << &a << endl;
    cout << "This is the value of aptr :" << aptr << endl;
    cout << "This is the value of &aptr :" << &aptr << endl;
    cout << "This is the value of *aptr :" << *aptr << endl;
    cout << "This is the value of a :" << a << endl;

    // YOU CAN CHAMGE THE VALUE OF A WITH A POINTER WITH OUT CHANGING THE VALUE OF A
    *aptr = 90;
    cout << "This is the value of new *aptr :" << *aptr << endl;
    cout << "This is the value of new a :" << a << endl;

    // aptr++;
    cout << "This is the value of aptr++ :" << aptr << endl;

    char ch = 'R';
    char *cptr = &ch;

    cout << "This is the value of *cptr :" << *cptr << endl;
    cout << "This is the value of cptr :" << cptr << endl;

    cptr++;

    cout << "This is the value of cptr++ :" << *cptr << endl;

    int arr[] = {10, 20, 30};

    cout << "This is value of *arr: " << *arr << endl;

    int *ptr = arr;

    for (int i = 0; i < 3; i++)
    {
        cout << "THIS PRINTS WHOLE ARRAY : " << i << " " << *ptr << endl;
        // OR WE CAN ALSO WRITE cout<<*(arr+i)<<endl;
        ptr++;
    }

    int a = 10;
    int *p = &a;
    int **q = &p;
    cout << "  p  : " << p << endl;
    cout << " *p  : " << *p << endl;
    cout << "  q  : " << q << endl;
    cout << " *q  : " << *q << endl;
    cout << " **q : " << **q << endl;

    return 0;
}