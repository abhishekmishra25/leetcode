#include <bits/stdc++.h>
using namespace std;

int ropeCutting(int n, int a, int b, int c)
{
    if (n < 0)
        return -1;

    return max(ropeCutting(n - 1, a, b, c), ropeCutting(n - b, a, b, c), ropeCutting(n - c, a, b, c));
}

int main()
{
    int n = 23, a = 11, b = 9, c == 12;
    cout << ropeCutting(n, a, b, c);
    return 0;
}