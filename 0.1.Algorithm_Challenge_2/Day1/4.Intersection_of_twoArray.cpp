#include <bits/stdc++.h>

using namespace std;

class solution
{
public:
    int intersectionOfTwoarray(vector<int> &arrary1, vector<int> &array2)
    {
        int count = 0;
        map<int, int> freq_1, freq_2;
        for (auto x : array1)
        {
            freq_1[x]++;
        }
        for (auto x : array2)
        {
            freq_2[x]++;
        }
        for (auto it1 : freq_1, it2 : freq_2; it1 != freq_1.end() and it2 != freq_2.end();)
        {
            if (*it1.first == *it2.frist)
            {
                count++;
                it1++;
                it2++;
            }
            else if (*it1.first > *it2.first)
                it2++;
            else
                it1++;
        }
        return count;
    }
};
signed main()
{
    vector<int> array1, array2;
    // taking input of frist array
    while (stdin)
    {
        int x;
        cin >> x;
        array1.push_back(x);
    }
    while (stdin)
    {
        int x;
        cin >> x;
        array2.push_back(x);
    }
    solution ob1;
    cout << ob1.intersectionOfTwoarray(array1, array2);
    return 0;
}