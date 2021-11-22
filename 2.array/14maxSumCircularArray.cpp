#include <bits/stdc++.h>

using namespace std;

int maxSum(int arr[], int n)
{
    int res = arr[0];
    for (int i = 0; i < n; i++)
    {
        int curr_sum = arr[i];
        int max_sum = arr[i];
        for (int j = 1; j < n; j++)
        {
            int idx = (i + j) % n;
            curr_sum += arr[idx];
            max_sum = max(max_sum, curr_sum);
        }
        res = max(max_sum, res);
    }
    return res;
}

int main()
{
    int arr[] = {5, -2, 3, 4};
    int n = 4;
    cout << maxSum(arr, n);
    return 0;
}