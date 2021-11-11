#include <bits/stdc++.h>
using namespace std;

int subsetSUM(vector<int> v, int n, int kum, int i = 0, int curr = 0)
{
    if (i == n)
    {
        if (kum == curr)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    subsetSUM(v, n, kum, i + 1, curr += v[i]);
    subsetSUM(v, n, kum, i + 1, curr);
}

int main()
{
    int n = 7;
    vector<int> v = {5, 6, 7, 8, 9, 3, 7};
    int kum = 14;
    cout << subsetSUM(v, n, kum);
    return 0;
}