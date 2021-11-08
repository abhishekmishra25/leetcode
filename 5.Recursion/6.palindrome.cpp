#include <bits/stdc++.h>
using namespace std;

bool recursive(string str, int start, int end)
{
    if (end == 0 || end == 1)
    {
        return true;
    }

    else if (str[start] == str[end - 1])
    {
        recursive(str, start + 1, end - 1);
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