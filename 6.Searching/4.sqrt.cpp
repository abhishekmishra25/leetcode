#include <bits/stdc++.h>

using namespace std;

// nive soluction taking sqrt(n) so it prety basic
class Nive
{
public:
    int sqroot(int x)
    {
        int i = 1;
        for (; i * i <= x; i++)
        {
            // hello world
        }
        return i - 1;
    }
};

// best soouction
class better
{
public:
    int sqroot(int x)
    {
        int low = 1, high = x, ans = -1;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            int msq = mid * mid;
            if (msq == x)
                return mid;
            else if (msq > x)
                high = mid - 1;
            else
            {
                low = mid + 1;
                ans = mid;
            }
        }
        return ans;
    }
};
// man function
int main()
{
    int x = 15;
    Nive ob1;
    cout << ob1.sqroot(x) << endl;
    better ob2;
    cout << ob2.sqroot(x) << endl;
    return 0;
}

#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<T1, T2> &a, pair<T1, T2> &b)
{
    return a.second < b.second;
}
int main()
{
    string s = "nsdoivooirgoieq";
    map<char, int> mp;
    for (int i = 0; i < s.length(); i++)
    {
        mp[s[i]]++;
    }
    sort(mp.begin(), mp.end(), cmp);
    for (auto x : mp)
    {
        cout << x.first << " ";
    }
    return 0;
}