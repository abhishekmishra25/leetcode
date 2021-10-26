#include <bits/stdc++.h>
using namespace std;
int table[256];
void initialize()
{
    table[0] = 0;
    for (int i = 1; i < 256; i++)
    {
        table[i] = (1 & i) + table[i / 2];
    }
}
int main()
{
    int n;
    cin >> x;
    int res = table[n & 0xff];
    n = n >> 8;
    res += table[n & 0xff];
    n = n >> 8;
    res += table[n & 0xff];
    n = n >> 8;
    res += table[n & 0xff];
    cout << res << endl;
    return 0;
}