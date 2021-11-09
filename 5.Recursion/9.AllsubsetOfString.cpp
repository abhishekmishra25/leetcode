#include <bits/stdc++.h>

using namespace std;

void subset(string str, string ans = "", int n = 0)
{
    if (n == str.length())
    {
        cout << ans << " ,";
        return;
    }

    subset(str, ans, n + 1);

    subset(str, ans += str[n], n + 1);
}

int main()
{
    string str = "abc";
    subset(str);
    return 0;
}