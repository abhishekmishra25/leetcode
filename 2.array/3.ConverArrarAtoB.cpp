#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>

using namespace std;

template <typename A, typename B>
ostream &operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }
template <typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type>
ostream &operator<<(ostream &os, const T_container &v)
{
    os << '{';
    string sep;
    for (const T &x : v)
        os << sep << x, sep = ", ";
    return os << '}';
}
void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail>
void dbg_out(Head H, Tail... T)
{
    cerr << ' ' << H;
    dbg_out(T...);
}
#ifdef LOCAL
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
#define fo(i, n) for (int k = i; k < n; k++)
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

// code begins here

class Solution
{
public:
    int minInsAndDel(int a[], int b[], int n, int m)
    {
        // code here
        vector<int> new_a, lis, mp(1e5 + 1, 0);
        for (int i = 0; i < m; i++)
            mp[b[i]]++;
        for (int i = 0; i < n; i++)
            if (mp[a[i]])
                new_a.push_back(a[i]);
        for (auto x : new_a)
        { // finding LIS in O(NlogN) of new_a.
            auto it = lower_bound(lis.begin(), lis.end(), x);
            if (it != lis.end())
                *it = x;
            else
                lis.push_back(x);
        }
        return n + m - 2 * lis.size(); // ans=n+m-2*LIS(new_A)
    }
};
void solve()
{
    int n, m;
    cin >> n, m;
    Solution ob;
    int a[n] = {1, 2, 5, 3, 1};
    int b[n] = {1, 3, 5};
    cout << ob.minInsAndDel(a, b, n, m);
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    /* int tc;
     cin >> tc;
     fo(0, tc)
     {
         // cout << "Case #" << t << ": ";
         solve();
     }*/
    solve();
}