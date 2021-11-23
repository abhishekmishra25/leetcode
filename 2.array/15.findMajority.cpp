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
bool cmp(pair<int, int> &a, pair<int, int> &b)
{
    return a.second < b.second;
}
int findMajority1(int arr[], int n)
{
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }
    sort(mp.begin(), mp.end(), cmp);
    auto it = mp.begin();
    int x = (*it).second;
    if (x > n / 2)
    {
        return (*it).second;
    }
    else
        return -1;
}

// So there is another method called More booting algorithm
// this algorithm take O(1) space and
// O(N) time

int main()
{
    int arr[] = {8, 7, 6, 8, 6, 6, 6, 6, 6};
    int n = 7;
    cout << findMajority1(arr, n) << endl;
}