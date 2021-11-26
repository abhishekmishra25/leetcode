#include <bits/stdc++.h>

using namespace std;

bool equilbrium(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    lsum = 0;
    for (int i = 0; i < n; i++)
    {
        if (lsum == sum - arr[i])
            return true;
        lsum += arr[i];
        sum -= arr[i];
    }
    return false;
}

int main()
{
    int arr[] = {3, 4, 8, -9, 20, 6};

    int n = 6;
    int prefix_sum[n] = {0};
    // prefix_sum[0] = arr[0];
    // for (int i = 1; i < n; i++)
    // {
    //     prefix_sum[i] = prefix_sum[i - 1] + arr[i];
    // }
    cout << equilbrium(arr, n);
    return 0;
}