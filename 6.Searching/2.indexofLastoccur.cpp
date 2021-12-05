#include <bits/stdc++.h>

using namespace std;
// creating a calss soluction
class soluction
{
public:
    int Lastindex(vector<int> &arr, int target)
    {
        int low = 0, high = arr.size() - 1;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (arr[mid] > target)
                high = mid - 1;
            else if (arr[mid] < target)
                low = mid + 1;
            else
            {
                if (mid == arr.size() - 1 || arr[mid] != arr[mid + 1])
                    return mid;
                else
                    low = mid + 1;
            }
        }
        return -1;
    }
};

// main  function
int main()
{
    vector<int> arr = {10, 10, 20, 20, 30, 30, 40};
    int target = 30;
    soluction ob1;
    cout << ob1.Lastindex(arr, target) << endl;
    return 0;
}