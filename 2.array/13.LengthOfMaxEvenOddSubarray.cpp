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
            if ((arr[j] % 2 == 0 && arr[j - 1] % 2 != 0) || (arr[j] % 2 != 0 && arr[j - 1] % 2 == 0))
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
    int arr[] = {15, 10, 20, 6, 3, 8};
    int n = 6;
    cout << MaxlenSubArray(arr, n);
    return 0;
}