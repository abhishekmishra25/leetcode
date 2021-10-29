#include <bits/stdc++.h>

using namespace std;

int sumDigit(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return (n % 10 + sumDigit(n / 10));
}

int main()
{
    int n;
    cin >> n;
    cout << sumDigit(n) << endl;
    return 0;
}