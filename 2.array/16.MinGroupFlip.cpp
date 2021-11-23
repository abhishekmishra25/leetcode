#include <bits/stdc++.h>

using namespace std;

int count_group(int arr[], int n)
{
    int count0 = 0, count1 = 0;
    for (int i = 1; i < n; i++)
    {
        if ((arr[i] == 1) and (arr[i - 1]) == 0)
            count1++;
        }
    return count1;
}

void MinGroupFlip(int arr[], int n)
{
    cout << "From 2 to 4" << endl;
}

int main()
{
    int arr[] = {1, 1, 0, 0, 0, 1};
    int n = 6;
    MinGroupFlip(arr, n);
    return 0;
}