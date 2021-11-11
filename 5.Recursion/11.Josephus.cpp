#include <bits/stdc++.h>

using namespace std;

// In this problem we are given n number of
// person , each time we have to kill the kth person

int josephus(int n, int k)
{
    if (n == 0)
    {
        return 0;
    }
    return (josephus(n - 1, k) + k) % n;
}

int main()
{
    int n = 7, k = 3;
    cout << josephus(n, k);
    return 0;
}