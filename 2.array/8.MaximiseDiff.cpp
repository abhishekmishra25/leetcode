#include <bits/stdc++.h>
using namespace std;
// in this question we have given an array of int
// we nedd to find maxx difference arr[j]-arr[i] such that j>i

class Soluction_best
{
public:
    void maxDiff(int arr[], int n)
    {
        int res = arr[1] - arr[0];
        int minval = arr[0];
        for (int i = 1; i < n; i++)
        {
            res = max(res, arr[i] - minval);
            minval = min(minval, arr[i]);
        }
        cout << res << endl;
    }
};

int main()
{
    int arr[] = {2, 3, 10, 6, 4, 8, 1};
    Soluction_best ob1;
    ob1.maxDiff(arr, 7);
    return 0;
}