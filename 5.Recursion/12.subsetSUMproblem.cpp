#include <bits/stdc++.h>
using namespace std;

int subsetSUM(int v[], int n, int kum)
{
    if (n == 0)
    {
        return kum == 0 ? 1 : 0;
    }
    return subsetSUM(v, n - 1, kum) + subsetSUM(v, n - 1, kum - v[n - 1]);
}

int main()
{
    int n = 7;
    int v[] = {5, 6, 2, 8, 9, 3, 12};
    int kum = 14;
    cout << subsetSUM(v, n, kum);
    return 0;
}