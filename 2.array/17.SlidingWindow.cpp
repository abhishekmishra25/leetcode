#include <bits/stdc++.h>

using namespace std;

// Que 2: given an unsoted array you need to
// find  that a subarray exist with given sum
// else return -1;

void given_sum(int arr[], int n)
{
}

void solve_sliding_window(int arr[], int n, int k)
{
    int sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum += arr[i];
    }
    int curr = sum;
    for (int i = k; i < n; i++)
    {
        curr = curr + arr[i] - arr[i - k];
        sum = max(sum, curr);
    }
    cout << sum;
    return;
}
// using namespace std;

int main()
{

    int arr[] = {1, 8, 30, -5, 20, 7};
    int n = 6;
    solve_sliding_window(arr, n, 3);
    return 0;
}