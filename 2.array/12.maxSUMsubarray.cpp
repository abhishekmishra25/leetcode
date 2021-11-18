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

    cout << GetSUM(arr, n);
    cout << endl;
    cout << maxSum(arr, n);

    return 0;
}