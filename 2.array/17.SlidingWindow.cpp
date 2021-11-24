#include <bits/stdc++.h>

using namespace std;

void solve_sliding_window(int arr[], int n, int k)
{
    int sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum += arr[i];
    }
    for (int i = k; i < n; i++)
    {
        int curr = sum + arr[i] - arr[i - k];
        sum = max(sum, curr);
    }
    cout << sum;
    return;
}
using namespace std;

int main()
{

    int arr[] = {1, 8, 30, -5, 20, 7};
    int n = 6;
    solve_sliding_window(arr, n, 3);
    return 0;
}