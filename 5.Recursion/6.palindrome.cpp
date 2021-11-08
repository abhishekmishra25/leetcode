#include <bits/stdc++.h>
using namespace std;

bool recursive(string str, int start, int end)
{
    if (start >= end)
    {
        return true;
    }
    return (str[start] == str[end]) && recursive(str, start + 1, end - 1);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string str = "abbcbba";
    cout << recursive(str, 0, str.size() - 1);
    return 0;
}