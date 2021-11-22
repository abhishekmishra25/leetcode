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

// solving same problem using kaddane algortihm
//  so what i'm thinking is if i mutlipky all the
//  elements by -1 then find max sum
//  then add to the total sum;
int normalMax(int arr[], int n)
{
    int curr_sum = arr[0];
    int max_sum = arr[0];
    for (int i = 1; i < n; i++)
    {
        curr_sum = max(curr_sum + arr[i], arr[i]);
        max_sum = max(curr_sum, max_sum);
    }
    return max_sum;
}

int revKadane(int arr[], int n)
{
    int k = normalMax(arr, n);
    if (k < 0)
        return k;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        arr[i] = arr[i] * (-1);
    }
    int curr_sum = arr[0];
    int max_sum = arr[0];
    for (int i = 1; i < n; i++)
    {
        curr_sum = max(curr_sum + arr[i], arr[i]);
        max_sum = max(curr_sum, max_sum);
    }
    return sum + max_sum;
}

int main()
{
    int arr[] = {-4, 8, 3, -5, 4};
    int n = 5;
    cout << maxSum(arr, n);
    cout << endl;
    cout << revKadane(arr, n);
    int arr2[] = {-4, -5};
    int n2 = 2;
    cout << endl;
    cout << maxSum(arr2, n2);
    cout << endl;
    cout << revKadane(arr2, n2);
    return 0;
}
// time complexity on O(3*N) = O(N);
// goodbye