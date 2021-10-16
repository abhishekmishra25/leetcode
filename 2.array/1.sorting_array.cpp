#include <bits/stdc++.h>
using namespace std;

int main()
{
    // in real interview allways use sort() library function
    // beacuse it not gives error and it dynamically select
    // which type of sorting is required
    // if input is small then selection sort;
    // if input is large then merge sort
    // eq arr[]= {1,2,3,3,1,1,2,4,5,9,7,3,1}
    int arr[] = {1, 2, 3, 3, 1, 1, 2, 4, 5, 9, 7, 3, 1};
    sort(arr, arr + 13);
    for (int i = 0; i < 13; i++)
        cout << arr[i] << " ";
}