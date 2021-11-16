#include <bits/stdc++.h>
using namespace std;

class nive
{
public:
    void leader(int arr[], int n)
    {
        for (int i = 0; i < n; i++)
        {
            bool flag = false;
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] < arr[j])
                {
                    flag = true;
                    break;
                }
            }
            if (flag == false)
            {
                cout << arr[i] << " ";
            }
        }
    }
};

class soluction
{
public:
    void Leader(int arr[], int n)
    {
        int curr_max = arr[n - 1];
        cout << curr_max << " ";
        for (int i = n - 1; i >= 0; i--)
        {
            if (arr[i] > curr_max)
            {
                cout << arr[i] << " ";
                curr_max = arr[i];
            }
        }
        return;
    }
};
int main()
{
    int arr[] = {7, 10, 4, 3, 6, 5, 2};
    int n = 7;
    soluction ob1;
    ob1.Leader(arr, n);
    nive bo2;
    cout << endl;
    bo2.leader(arr, n);

    return 0;
}