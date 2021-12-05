#include <bits/stdc++.h>
using namespace std;
//  TO GET MAXIMUM VALUE IN A KANPSACK WITH IN ITS WEIGHT CAPACITY;

int knapsack(int value[], int wt[], int n, int w)
{
    //    wt[]=weight of the given items;
    //    w=weight capacity of knapsack;

    if (n == 0 || w == 0)
    {
        return 0;
    }

    if (wt[n - 1] > w)
    {
        return knapsack(value, wt, n - 1, w); // The meaning of this term is we donot consider the item;
    }

    return max(knapsack(value, wt, n - 1, w - wt[n - 1]) + value[n - 1], knapsack(value, wt, n - 1, w));
}

int main()
{

    int value[] = {100, 50, 150};
    int wt[] = {10, 20, 30};
    int w = 50;

    cout << "Your maximum value of stolen things is --> " << knapsack(value, wt, 3, w) << endl;

    return 0;
}