#include <bits/stdc++.h>

using namespace std;

void getsum(int arr[], int n)
{
    int res = arr[0];
    for (int i = 0; i < n; i++)
    {
        int curr = 0;
        for (int j = i; i < n; j++)
        {
            curr += arr[j];
            res = max(res, curr);
        }
    }
    cout << res;
}
// applying kaddanes algorithm
int maxSum(int arr[], int n)
{
    int curr_sum = arr[0];
    int max_sum = INT_MIN;
    for (int i = 1; i < n; i++)
    {
        curr_sum += arr[i];
        if (max_sum < curr_sum)
        {
            max_sum = curr_sum;
        }
        if (curr_sum <= 0)
        {
            curr_sum = 0;
        }
    }
    return max_sum;
}

int main()
{
    int arr[] = {1, -2, 3, -1, 2};
    int n = 5;
    cout << maxSum(arr, n);
    cout << getsum(arr, n);
    return 0;
}