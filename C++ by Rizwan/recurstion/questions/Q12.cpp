#include <bits/stdc++.h>
using namespace std;
//  COUNTING TOTAL NO OF POSSIBLE WAYS OF INSERTING A TILE OF SIZE 2 X 1 ON THE BLOCK OF SIZE 2 X N BOTH HORIZANTLY AND VERTICALLY USING RECURSTION

int tilingways(int n) // THIS PROBLEM IS CLOSE TO FIBONACCI SERIES;
{

    // FIRST WRITE THE BASE CASES
    if (n == 0)
    {
        return 0;
    }

    if (n == 1)
    {
        return 1;
    }

    return tilingways(n - 1) + tilingways(n - 2);
} //      for vertical         for horizantal

int main()
{

    int n;
    cout << " Enter n for sticking tiles : ";
    cin >> n;

    cout << "Your total no of ways are --> " << tilingways(n) << endl;
    return 0;
}