#include <bits/stdc++.h>
using namespace std;
// TOP K MOST FREQUENT ELEMENTS
// OUTPUT ELEMENTS IN DECREASING ORDER UNTIL (K+1)th DISTINCT ELEMENTS

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    map<int, int> freq;

    for (int i = 0; i < n; i++)
    {
        int presentSize = freq.size();
        if (freq[a[i]] == 0 && presentSize == k)
        {
            break;
        }

        freq[a[i]]++;
    }

    vector<int> ans;
    map<int, int>::iterator it;

    for (auto it = freq.begin(); it != freq.end(); it++)
    {
        if (it->second != 0)
        {
            pair<int, int> p;
            p.first = it->second;
            p.second = it->first;
            ans.push_back(p);
        }
    }

    sort(ans.begin(), ans.end(), greater<pair<int, int>>());

    vector<pair<int, int>>::iterator it1;
    for (it1 = ans.begin(); it1 != ans.end(); it1++)
    {
        cout << it1->first << " " << it1->second << endl;
    }

    return 0;
}