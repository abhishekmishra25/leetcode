#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, m;
    int v[n][m];
    cin >> n >> m;
    // taking input array
    for (int i = 0; i < n; i++)
    {
        vector<int> temp;
        for (int j = 0; j < m; j++)
        {
            int x;
            cin >> x;
            v[i][j] = x;
        }
    }
    // computing prefix sum;
    // i don't have a fukin idea how to do it in 2d array
    int pre[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            pre[i][j] = v[i][j];
            if (i - 1 >= 0)
                pre[i][j] += pre[i - 1][j];
            if (j - 1 >= 0)
                pre[i][j] += pre[i][j - 1];
            if (j - 1 >= 0 and i - 1 >= 0)
                pre[i][j] -= pre[i - 1][j - 1];
            cout << pre[i][j] << " ";
        }
        cout << endl;
    }
    return;
}
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}