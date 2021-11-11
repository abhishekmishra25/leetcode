#include <bits/stdc++.h>
using namespace std;

int subsetSUM(vector<int> v, int n, int sum, int i = 0, int curr = 0)
{
    if (i == n)
    {
        if (sum == curr)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    subsetSUM(v, n, sum, i + 1, curr);
    subsetSUM(v, n, sum, i + 1, curr += v[i]);
}

int main()
{
    int n = 7;
    vector<int> v = {5, 6, 7, 8, 9, 3, 7};
    int sum = 14;
    cout << subsetSUM(v, n, sum);
    return 0;
}