#include <iostream>
using namespace std;

// i++ means first the value of i is i which is given and next it will be incremented for the next i value;
// ++i means first the value of i is incremented by 1 and then for next the value of i will be the incremented i;
// same for --i and i--;

int main()
{
    // int i=1;

    // i= i++ + ++i;      // ANS = 4;

    // cout<<i<<endl;

    //    int i=1;
    //    int j=2;
    //    int k;

    //     k = i +j + i++ + j++ + ++i + ++j;      // ANS = i=3,j=4,k=13 ;

    //     cout<<i<<" "<<j<<" "<<k<<" "<<endl;

    // int i=0;

    // i = i++ - --i + ++i - i--;        ANS = 0;

    // cout<<i<<endl;

    // int i=1, j=2, k=3;

    // int m = i-- - j-- - k--;

    // cout<<i<<endl;   //i=o
    // cout<<j<<endl;   //j=1
    // cout<<k<<endl;   //k=2
    // cout<<m<<endl;   //m=-4

    int i = 10, j = 20, k;

    k = i-- - i++ + --j - ++j + --i - j-- + ++i - j++;

    cout << i << endl;
    cout << j << endl;
    cout << k << endl;

    // i++ first print and next increment it ;
    // ++i first increment it and then print it;
    // i-- first print and next decrement it ;
    // --i first decrement it and then print it;

    return 0;
}