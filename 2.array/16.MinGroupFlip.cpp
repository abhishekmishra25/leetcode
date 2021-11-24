#include <bits/stdc++.h>

using namespace std;
/*
int count_group(int arr[], int n, int a)
{
    int counta=0;
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
        if(arr[i]==res)
    }
}*/

void solve(int arr[], int n)
{
    int start = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[i - 1])
        {
            if ((arr[i] != start))
                cout << "From " << i << " to ";
            else
                cout << (i - 1) << endl;
        }
        // if ((arr[i + 1] == start) and (arr[i] != start))
        //     cout << i << endl;
    }
    if (arr[n - 1] != start)
    {
        cout << (n - 1) << endl;
    }
}
int main()
{
    int arr[] = {1, 1, 0, 0, 1, 1, 0, 0, 1};
    int n = 6;
    solve(arr, n);
    return 0;
}