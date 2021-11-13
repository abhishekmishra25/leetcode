#include <bits/stdc++.h>

using namespace std;
class soluction
{
public:
    int leftrotate(vector<int> arr)
    {
        int temp = arr[0];
        for (int i = 1; i < arr.size(); i++)
        {
            arr[i - 1] = arr[i];
        }
        arr[n - 1] = temp;
        return arr;
    }

public:
    int rotateARR(vector<int> arr, int d)
    {
        for (int i = 0; i < d; i++)
        {
            leftrotate(arr);
        }
    }
    return arr;
}

int
main()
{
    // left rotate array by d
    vector<int> arr = {3, 4, 5, 6, 3, 1, 2};
    int d = 3;
    soluction ob;
    ob.rotateARR(arr, d);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}