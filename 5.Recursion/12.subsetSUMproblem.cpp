#include <bits/stdc++.h>
using namespace std;

int subsetSUM(vector<int> v, int n, int kum, int curr = 0)
{
    if (n == 0)
    {
        if curr == kum)
            {
                return 1;
            }
        else
        {
            return 0;
        }
    }
    return subsetSUM(v, n - 1, kum, curr += v[n - 1]) + subsetSUM(v, n - 1, kum, curr);
}

int main()
{
    int n = 7;
    vector<int> v = {5, 6, 7, 8, 9, 3, 7};
    int kum = 14;
    cout << subsetSUM(v, n, kum);
    return 0;
}