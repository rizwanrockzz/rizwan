#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a, b;
    cout << "enter values : " << endl;
    cin >> a >> b;

    swap(&a, &b);

    cout << a << " " << b << endl;

    return 0;
}
