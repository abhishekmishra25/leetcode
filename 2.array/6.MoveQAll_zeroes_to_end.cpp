#include <bits/stdc++.h>
using namespace std;
class soluction_Nive
{
public:
    void move_zero(int arr[], int n)
    {
        // working in time complwxtiy of O(N^2);
        for (int i = 0; i < n; i++)
        {
            // int temp = arr[i];
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] == 0 and arr[j] != 0)
                {
                    swap(arr[i], arr[j]);
                }
            }
        }
    }
};
int mainn()
{
    int arr[] = {1, 2, 0, 7, 0, 3, 6, 4, 0, 0, 0};
    int n = 11;
    soluction_Nive ob1;
    ob1.move_zero(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}