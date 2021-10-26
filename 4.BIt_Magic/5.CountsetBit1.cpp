#include <bits/stdc++.h>
using namespace std;
// method 1 NIVE approach
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
// method 2 Brian Berningam's method
class Brian_Berningam
{
public:
    void solve()
    {
        int n;
        cin >> n;
        int res = 0;
        while (n > 0)
        {
            n = (n & (n - 1));
            res++;
        }
        cout << res << endl;
    }
};
int main()
{
    int t;
    cin >> t;
    // method 1 : soluction ob;
    Brian_Berningam sb;
    while (t--)
    {
        sb.solve();
    }
}