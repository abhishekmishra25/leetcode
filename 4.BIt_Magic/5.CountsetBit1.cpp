#include <bits/stdc++.h>
using namespace std;
class soluction
{
public:
    void solve()
    {
        int x;
        cin >> x;
        int res = 0;
        while (x > 0)
        {
            res = res + (x & 1);
            x = x >> 1;
        }
        cout << res << endl;
    }
};
int main()
{
    int t;
    cin >> t;
    soluction ob;
    while (t--)
    {
        ob.solve();
    }
}