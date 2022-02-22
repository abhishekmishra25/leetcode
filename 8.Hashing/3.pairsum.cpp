#include <bits/stdc++.h>

using namespace std;

class solution
{
public:
    bool pairSum(vector<int> &nums, int target)
    {
        unordered_set<int> s;
        for (auto x : nums)
        {
            if (s.find(target - x) != s.end())
                return true;
            s.insert(x);
        }
        return false;
    }
};

int main()
{
    int target = 10;
    vector<int> nums = {11, 5, 6};
    solution ob1;
    cout << ob1.pairSum(nums, target);
    return 0;
}