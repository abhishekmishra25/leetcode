#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    map<int, int> mp;
    set<int> s(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        mp[v[i]]++;
    }
    int count = 0;
    while (mp.size != 0)
    {
        for (auto x : s)
        {
            count++;
            mp.erase(x);
            if (s.find(x + 1) == true)
                mp.erase(x + 1);
            if (s.find(x - 1) == true)
                mp.erase(x - 1);
        }
    }
    cout << count;
    return 0;
}