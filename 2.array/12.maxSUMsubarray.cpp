#include <bits/stdc++.h>

using namespace std;

// NIVE soluction is fucking hatered
int GetSUM(int arr[], int n)
{
    int result = arr[0];
    for (int i = 0; i < n; i++)
    {
        int current = 0;
        for (int j = i; j < n; j++)
        {
            current += arr[j];
            result = max(result, current);
        }
    }
    return result;
}
// applying kaddanes algorithm
int maxSum(int arr[], int n)
{
    int curr_sum = arr[0];
    int max_sum = arr[0];
    for (int i = 1; i < n; i++)
    {
        max_sum = max(max_sum + arr[i], arr[i]);
        curr_sum = max(curr_sum, max_sum);
    }
    return curr_sum;
}

int main()
{
    int arr[] = {-5, -1, -2, -3, -1, -12, -2};
    int n = 7;
    // nive soluction
    cout << GetSUM(arr, n);
    cout << endl;
    // kadanes algorithm
    cout << maxSum(arr, n);

    return 0;
}