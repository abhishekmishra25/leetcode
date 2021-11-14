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
    void leftrotate(int arr[], int n)
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
class better_extra_space
{
public:
    void print(int arr[], int n)
    {
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
    }
    void rotateByD(int arr[], int n, int d)
    {
        int temp[d];
        for (int i = 0; i < d; i++)
        {
            temp[i] = arr[i];
        }
        for (int i = d; i < n; i++)
        {
            arr[i - d] = arr[i];
        }
        for (int i = 0; i < d; i++)
        {
            arr[n - d + i] = temp[i];
        }
        print(arr, n);
    }
};
int main()
{
    // left rotate array by d
    int arr[] = {3, 4, 5, 6, 3, 1, 2};
    int d = 3;
    // soving using nive aproach
    /*
    sol_Nive ob1;
    ob1.rotateARR(arr, d, 7);*/
    cout << endl;
    better_extra_space ob2;
    ob2.rotateByD(arr, 7, d);
    cout << endl;
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}