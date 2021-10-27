
// this programm is desinged for two distint elemnet in array
// in order to achive that we need to xor all element
//  then need to find last set bit
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 1, 2, 3, 3, 4, 4, 5, 6, 5, 6};
    int n = 14;
    int x = 0, res1 = 0;
    res2 = 0;
    for (int i = 0; i < n; i++)
    {
        x = x ^ arr[i];
    }
    int sbl = x & (~x); // to find the last set bit if result
}