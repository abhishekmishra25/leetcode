#include <bits/stdc++.h>

using namespace std;

int maxcon1(int arr[], int n)
{
    int curr_count = 0, max_count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            curr_count += 1;
        }
        else
        {
            curr_count = 0;
        }
        if (curr_count > max_count)
        {
            max_count = curr_count;
        }
    }
    return max_count;
}

int main()
{
    int arr[] = {0, 1, 1, 0, 1, 0, 1, 1, 1};
    int n = 9;
    cout << maxcon1(arr, n);
    return 0;
}