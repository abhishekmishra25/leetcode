#include <bits/stdc++.h>

using namespace std;

int count_group(int arr[], int n, int a)
{
    int counta;
    for (int i = 1; i < n; i++)
    {
        if ((arr[i] == a) and (arr[i - 1]) != a)
            counta++;
    }
    return counta;
}

void MinGroupFlip(int arr[], int n)
{
    int c0 = count_group(arr, n, 0);
    int c1 = count_group(arr, n, 1);
    // cout << "From 2 to 4" << endl;
    int res = max(c0, c1);
    for (int i = 0; i < n; i++)
    {
    }
}

int main()
{
    int arr[] = {1, 1, 0, 0, 0, 1};
    int n = 6;
    MinGroupFlip(arr, n);
    return 0;
}