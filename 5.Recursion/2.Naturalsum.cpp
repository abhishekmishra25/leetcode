#include <bits/stdc++.h>
using namespace std;

int NaturalSum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + NaturalSum(n - 1);
}

int main()
{
    int n;
    cin >> n;
    NaturalSum(n);
    return 0;
}