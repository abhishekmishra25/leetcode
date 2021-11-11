#include <bits/stdc++.h>

using namespace std;

// In this problem we are given n number of
// person , each time we have to kill the kth person
// in this  problem it is hard to understand the
// the problem with help of recursion tree
// so we need to conceptulasie with the help of
// diagram

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
    int n = 4, k = 3;
    cout << josephus(n, k);
    return 0;
}