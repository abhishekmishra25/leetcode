#include <bits/stdc++.h>

using namespace std;

int findMajority(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }
        if (count > n / 2)
        {
            return arr[i];
        }
    }
    return -1;
}

// So, I want to solve this problem in O(N)
//
struct myCmp
{
public:
    bool good(pair<int, int> p1, pair<int, int> p2)
    {
        if (p1.second > p2.second)
        {
            return true;
            ;
        }
        else
        {
            return false;
        }
    }
} int findMajority(int arr[], int n)
{
    mao<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        ma[arr[i]]++;
    }
    sort(mp.begin(), mp.end(), myCmp);
}
int main()
{
    int arr[] = {8, 7, 6, 8, 6, 6, 6, 6, 6};
    int n = 7;
    cout << findMajority(arr, n) << endl;
}