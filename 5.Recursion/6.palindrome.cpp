#include <bits/stdc++.h>
using namespace std;

bool recursive(string str, int n, int l = 0)
{
    if (n == 0 || n == 1)
    {
        return true;
    }

    else if (str[l] == str[n - 1])
    {
        recursive(str, n - 1, l + 1);
    }
    else
    {
        return false;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string str = "abbcbba";
    cout << recursive(str, str.size(), 0);
    return 0;
}