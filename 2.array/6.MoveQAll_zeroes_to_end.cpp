#include <bits/stdc++.h>
using namespace std;
class soluction_Nive
{
    // void print(int arr[], int n)
    // {
    //     for (int i = 0; i < n; i++)
    //     {
    //         cout << arr[i] << " ";
    //     }
    //     return;
    // }

public:
    void move_zero(int arr[], int n)
    {
        // working in time complwxtiy of O(N^2);
        for (int i = 0; i < n; i++)
        {
            // int temp = arr[i];
            if (arr[i] == 0)
            {
                for (int j = i + 1; j < n; j++)
                    if (arr[j] != 0)
                        swap(arr[j], arr[i]);
            }
        }
        // print(arr, n);
        return;
    }
};
class soluction_better
{
public:
    void move_zero(int arr[], int n)
    {
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != 0)
            {
                swap(arr[i], arr[count]);
                count++;
            }
        }
    }
};
int main()
{
    int arr[] = {1, 2, 0, 7, 0, 3, 6, 4, 0, 0, 0};
    int n = 11;
    // soluction_Nive ob1;
    //  ob1.move_zero(arr, n);
    soluction_better ob2;
    ob2.move_zero(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}