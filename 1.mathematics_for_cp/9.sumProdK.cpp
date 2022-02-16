#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int numSubarrayProductLessThanK(vector<int> &nums, int k)
    {
        int count = 0;
        long prod = 1;
        int lo = 0, hi = 0, n = nums.size();
        while (lo < n and hi < n)
        {
            prod *= nums[hi];
            if (prod < k)
            {
                count += (hi - lo + 1);
                hi++;
            }
            else
            {
                prod /= nums[lo];
                lo++;
            }
        }
        return count;
    }
};

int main()
{
    vector<int> nums;
    int k;
    while (stdin)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    cin >> k;
    Solution on1;
    cout << on1.numSubarrayProductLessThanK(nums, k);
    return 0;
}