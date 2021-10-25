#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 120;
    long long digits = 0;
    for (int i = 2; i <= n; i++)
        digits += log10(i);
    cout << floor(digits) + 1;
    return 0;
}