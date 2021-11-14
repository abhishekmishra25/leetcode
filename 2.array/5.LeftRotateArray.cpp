#include <bits/stdc++.h>

using namespace std;
class sol_Nive
{
public:
    void print(int arr[], int n)
    {
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
    }
    leftrotate(int arr[], int n)
    {
        int temp = arr[0];
        for (int i = 1; i < n; i++)
        {
            arr[i - 1] = arr[i];
        }
        arr[n - 1] = temp;
        // return arr;
    }

    void rotateARR(int arr[], int d, int n)
    {
        for (int i = 0; i < d; i++)
        {
            leftrotate(arr, n);
        }
        print(arr, n);
    }

    // return arr;
};
class better
{
public:
    void print(int arr[], int n)
    {
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
    }
};
int main()
{
    // left rotate array by d
    int arr[] = {3, 4, 5, 6, 3, 1, 2};
    int d = 3;
    sol_Nive ob1;
    ob1.rotateARR(arr, d, 7);
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}