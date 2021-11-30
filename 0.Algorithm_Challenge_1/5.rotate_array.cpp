// https://leetcode.com/problems/rotate-array/
class Solution
{
public:
    void reverse(vector<int> &arr, int low, int high)
    {
        while (low < high)
        {
            swap(arr[low], arr[high]);
            low++;
            high--;
        }
    }
    void rotate(vector<int> &nums, int k)
    {
        if (nums.size() == 0 || nums.size() == 1)
        {
            return;
        }

        int low = 0, high = nums.size() - 1;
        if (k >= high)
            k = k % (high + 1);
        reverse(nums, low, high - k);
        reverse(nums, high - k + 1, high);
        reverse(nums, low, high);
    }
};