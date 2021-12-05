#include <bits/stdc++.h>

using namespace std;

class soluction
{
public:
    int FirstOccur(vector<int> &v, int n, int target)
    {
        int low = 0, high = n - 1;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (v[mid] > target)
                high = mid - 1;
            else if (v[mid] < target)
                low = mid + 1;
            else
            {
                if (mid == 0 || v[mid] != v[mid - 1])
                    return mid;
                else
                    high = mid - 1;
            }
        }
        return -1;
    }
};
// main function
int main()
{
    vector<int> v = {10, 10, 20, 10, 20, 30};
    int n = 6;
    soluction ob1;
    cout << ob1.FirstOccur(v, n, 20) << endl;
    return 0;
}