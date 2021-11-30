// https://leetcode.com/problems/first-bad-version/
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution
{
public:
    int firstBadVersion(int n)
    {
        int l = 0, r = n;
        int res = INT_MAX;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (isBadVersion(mid) == true)
            {
                res = min(res, mid);
                r = mid - 1;
            }
            else
                l = mid + 1;
        }
        return res;
    }
};