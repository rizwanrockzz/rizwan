#include <bits/stdc++.h>
using namespace std;
// GRAPH REPRESENTATION

#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int, int>
#define vii vector<pii>
#define ff first
#define ss second

const int N = 1e5 + 2, MOD = 1e9 + 2;

vi adj[N];

int main()
{
    int n, m;
    cin >> n >> m;

    vvi adjm(n + 1, vi(n + 1, 0));

    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;

        adjm[x][y] = 1;
        adjm[y][x] = 1;
    }

    cout << "Adjacency matrix of above graph is given by: " << endl;

    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < n + 1; j++)
        {
            cout << adjm[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl
         << endl;

    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;

        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    for (int i = 1; i < n + 1; i++)
    {
        cout << i << " -> ";
        vector<int>::iterator it;
        for (it = adj[i].begin(); it != adj[i].end(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;
    }

    return 0;
}

// test case
// 7 7
// 1 2
// 1 3
// 2 4
// 2 5
// 2 6
// 2 7
// 7 3
