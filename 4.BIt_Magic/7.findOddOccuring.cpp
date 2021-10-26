#include <bits/stdc++.h>
using namespace std;
void findmissing(int arr[], int n)
{
    int x = 0;
    for (int i = 1; i < n; i++)
    {
        x = x ^ i ^ arr[i - 1];
    }
    x = x ^ n;
    cout << x << endl;
}
int main()
{
    int arr[] = {2, 4, 3, 4, 5, 5, 8, 9, 8, 9, 2};
    int x = 0;
    for (int i = 0; i <= 10; i++)
    {
        x = x ^ arr[i];
    }
    cout << x << endl;
    int brr[] = {1, 3, 4};
    findmissing(brr, 4);
    return 0;
}