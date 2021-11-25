#include <bits/stdc++.h>

using namespace std;

// solve n-bonacci number
// wtf

void n_bonacci(int n, int m)
{
    int a[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = 0;
    }
    a[n - 1] = 1;
}

// Que 2: given an unsoted array you need to
// find  that a subarray exist with given sum
// else return -1;

bool given_sum(int arr[], int n, int ksum)
{
    int curr_sum = arr[0], s = 0;
    for (int e = 1; e < n; e++)
    {
        // clear the previous window
        while (curr_sum > ksum and s < e - 1)
        {
            curr_sum -= arr[s];
            s++;
        }
        if (curr_sum == ksum)
            return true;
        if (e < n)
            curr_sum += arr[e];
    }
    return (curr_sum == ksum);
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
    cout << endl;
    cout << given_sum(arr, n, 45);
    return 0;
}