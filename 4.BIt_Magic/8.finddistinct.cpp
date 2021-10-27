
// this programm is desinged for two distint elemnet in array
// in order to achive that we need to xor all element
//  then need to find last set bit
// then we need to divide two group1 so tha we can differentiate
// two numbwes which appears odd times

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {3, 4, 4, 3, 3, 3, 5, 4, 4, 6};
    int n = 10;
    int x = 0, res1 = 0, res2 = 0;
    for (int i = 0; i < n; i++)
    {
        x = x ^ arr[i];
    }
    int sbl = x & (~x - 1); // to find the last set bit if result
    for (int i = 0; i < n; i++)
    {
        if ((arr[i] & sbl) != 0)
        {
            res1 = res1 ^ arr[i];
        }
        else
        {
            res2 = res2 ^ arr[i];
        }
    }
    cout << res1 << " " << res2 << endl;
    return 0;
}