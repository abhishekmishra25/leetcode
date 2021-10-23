#include <bits/stdc++.h>
using namespace std;
void Binarysearch(int arr[], int n, int x)
{
    int l = 0, r = n - 1;
    while (l < r)
    {
        int mid = l / 2 + (r - l) / 2;
        if (arr[mid] == x)
        {
            cout << "element found at index : " << mid << endl;
            return;
        }
        else if (arr[mid] < x)
        {
            l = id + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << "element no found in array : " << endl;
}
int main()
{
    // binary search is done on sorted array it takes O(log(n))
    // linear serch is done any kind of array it takes O(n) time
}