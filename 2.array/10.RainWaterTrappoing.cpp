#include <bits/stdc++.h>

using namespace std;

class Nive_sol
{
public:
    void rainwater(int arr[], int n)
    {
        int res = 0;
        for (int i = 1; i < n - 1; i++)
        {
            int lmax = arr[i];
            for (int j = 0; i < i; j++)
            {
                lmax = max(arr[j], lmax);
            }
            int rmax = arr[i];
            for (int j = i + 1; j < n; j++)
            {
                rmax = max(arr[j], rmax);
            }
            res = res + (min(lmax, rmax) - arr[i]);
        }
        cout << res << endl;
    }
};
class better_sol
{
public:
    void getwater(int arr[], int n)
    {
        int res = 0;
        int lmax[n], rmax[n];
        lmax[0] = arr[0];
        for (int i = 1; i < n; i++)
        {
            lmax[i] = max(arr[i], lmax[i]);
        }
        rmax[n - 1] = arr[n - 1];
        for (int i = n - 2; i >= 0; i--)
        {
            rmax[i] = max(arr[i], rmax[i + 1]);
        }
        for (int i = 1; i < n - 1; i++)
        {
            res = res + min(lmax[i], rmax[i]) - arr[i];
        }
        cout << res;
    }
};

int main()
{
    int arr[] = {3, 0, 1, 2, 5};
    int n = 5;
    Nive_sol ov1;
    ov1.rainwater(arr, n);
    better_sol ob2;
    ob2.getwater(arr, n);
    return 0;
}