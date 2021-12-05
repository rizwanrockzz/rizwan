#include <iostream>
#include <math.h>
using namespace std;
// ARMSTRONG NUMBER IS AN NUMBER IN WHICH THE SUM CUBE OF EACH DIGIT GIVES THE SAME NUMBER
int main()
{

    int n;
    cout << "enter the number" << endl;
    cin >> n;

    int sum = 0;
    int originaln = n;

    while (n > 0)
    {
        int lastdigit = n % 10;
        sum += pow(lastdigit, 3);
        n = n / 10;
    }

    if (sum == originaln)
    {
        cout << "armstrong"<<endl;
    }

    else
    {
        cout << "not armstrong"<<endl;
    }

    return 0;
}