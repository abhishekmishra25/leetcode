#include <bits/stdc++.h>
using namespace std;

class soluction
{
public:
    void Leader(int arr[], int n)
    {
        int curr_max = arr[n - 1];
        cout << curr_max << " ";
        for (int i = n - 1; i >= 0; i++)
        {
            if (arr[i] > curr_max)
            {
                cout << arr[i] << " ";
                curr_max = arr[i];
            }
        }
    }
};
int main()
{
    int arr[] = {7, 10, 4, 3, 6, 5, 2};
    int n = 7;
    soluction ob1;
    ob1.Leader(arr, n);

    return 0;
}