#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll fect(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * fect(n - 1);
}

int main()
{

    int n;
    cin >> n;
    cout << fect(n);
}