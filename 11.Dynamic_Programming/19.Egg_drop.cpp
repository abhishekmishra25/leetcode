#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>

using namespace std;

class solution
{
public:
    int egg_drop_rec(int floor, int egg)
    {
        if (egg == 1)
            return floor;
        if (floor == 1)
            return 1;
        if (floor == 0)
            return 0;
        int res = INT_MAX;
        for (int x = 1; x < floor; x++)
            res = min(max(egg_drop_rec(x - 1, egg - 1), egg_drop_rec(floor - x, egg)), res);
        return res;
    }
};

int main()
{
    int floor, egg;
    cin >> floor >> egg;
    solution ob1;
    cout << ob1.egg_drop_rec(floor, egg);
    return 0;
}
