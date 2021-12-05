#include <iostream>
using namespace std;
// FIBONACCI SERIES

void fibonacci(int n)
{
    int t1 = 0;
    int t2 = 1;
    int nextterm;

    for (int i = 1; i <= n; i++)
    {

        cout << t1 << endl;
        nextterm = t1 + t2;
        t1 = t2;
        t2 = nextterm;
    }
}

int main()
{
    int n;
    cout << "enter n : ";
    cin >> n;

    fibonacci(n);

    return 0;
}


// Method 2

#include <iostream>
using namespace std;

int main() {
    int t1 = 0, t2 = 1, nextTerm = 0, n;

    cout << "Enter a positive number: ";
    cin >> n;

    // displays the first two terms which is always 0 and 1
    cout << "Fibonacci Series: " << t1 << ", " << t2 << ", ";

    nextTerm = t1 + t2;

    while(nextTerm <= n) {
        cout << nextTerm << ", ";
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
    return 0;
}