#include <bits/stdc++.h>
using namespace std;
#define ll long long
struct myCmp
{
    bool compare(pair<int, int> p1, pair<int, int> p2)
    {
        if (p1.second == p2.second)
        {
            return p1.first > p2.first;
        }
        return p1.second < p2.second;
    }
};
void printkfreq(int arr[], int n, int k)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }
    priority_queue<pair<int, int>, vector<std::pair<int, int>>, myCmp> pq(mp.begin(), mp.end());
    for (int i = 0; i < k; i++)
    {
        cout << pq.top().first << " " << pq.top().second << endl;
        pq.pop();
    }
}
int main()
{
    // your code goes here
    int arr[] = {10, 5, 20, 5, 10, 10, 30};
    printkfreq(arr, 6, 2);
    return 0;
}
