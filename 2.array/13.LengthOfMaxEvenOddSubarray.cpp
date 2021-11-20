#include <bits/stdc++.h>
using namespace std;

// create a function which tell max length of
// even odd occurring subaaray

int MaxlenSubArray(int arr[], int n)
{
    int rsult = 1;
    for (int i = 0; i < n; i++)
    {
        int curr = 1;
        for (int j = i + 1; j < n; j++)
        {
            if ((arr[i] % 2 == 0 and arr[i - 1] % 2 != 0) || (arr[i] % 2 != 0 and arr[i - 1] % 2 == 0))
                curr++;
            else
                break;
        }
        rsult = max(rsult, curr);
    }
    return rsult;
}

int main()
{
    int arr[] = {10, 12, 13, 4, 9};
    int n = 5;
    cout << MaxlenSubArray(arr, n);
    return 0;
}