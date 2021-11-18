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

int main()
{
    int arr[] = {3, 0, 1, 2, 5};
    int n = 5;
    Nive_sol ov1;
    ov1.rainwater(arr, n);
    return 0;
}