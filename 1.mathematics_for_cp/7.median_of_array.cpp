#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 10;
    int arr[n] = {3, 4, 5, 6, 8, 9, 12, 23, 45, 56};
    int median = arr[n / 2] + arr[(n - 1) / 2];
    median /= 2;
    cout << median;
}