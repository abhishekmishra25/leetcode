#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    if (x & (x - 1) != 0)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
    return 0;
}