#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    if (x & (x - 1) == 0)
        cout << "yes" << endl;
    else
        cout << "NO" << endl;
    return 0;
}