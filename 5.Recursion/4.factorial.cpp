#include <bits/stdc++.h>
using namespace std;
#define ll long long

// this programm not only takes lareg time
// but also take O(n) extra space because it stores all
// fuction call in the stack
ll fect(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * fect(n - 1);
}

int main()
{

    int n;
    cin >> n;
    cout << fect(n);
}