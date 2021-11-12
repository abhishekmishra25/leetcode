#include <bits/stdc++.h>

using namespace std;

int main()
{
    // left rotate array by d
    vector<int> arr = {3, 4, 5, 6, 3, 1, 2};
    int d = 3;
    while (d--)
    {
        arr.push_back(arr[0]);
        arr.e
            erase(arr[0]);
    }
    for (auto x : arr)
    {
        cout << x << " ";
    }
    return 0;
}