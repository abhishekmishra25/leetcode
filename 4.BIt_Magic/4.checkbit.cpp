
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    int y = (n << (k - 1));
    if (y % 2 == 0)
    {
        cout << " NO " << endl;
    }
    else
    {
        cout << " YES " << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}