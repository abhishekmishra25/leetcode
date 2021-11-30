// https://leetcode.com/problems/search-insert-position/
class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int left = 0, right = nums.size() - 1;
        int res = INT_MAX;
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target)
                return mid;
            else if (nums[mid] > target)
            {
                right = mid - 1;
                res = min(mid, res);
            }
            else
            {
                left = mid + 1;
            }
        }
        if (res > nums.size())
            return nums.size();
        return res;
    }
};