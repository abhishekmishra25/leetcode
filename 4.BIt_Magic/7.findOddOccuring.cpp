#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {2, 4, 3, 4, 5, 5, 8, 9, 8, 9, 2};
    int x = 0;
    for (int i = 0; i <= 10; i++)
    {
        x = x ^ arr[i];
    }
    cout << x << endl;
    return 0;
}