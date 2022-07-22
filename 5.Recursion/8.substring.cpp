#include <bits/stdc++.h>

using namespace std;
// you have to generate all perumutaton of string which does not contain AB as sbstring;
void permutation(string s, int l, int r)
{
    if (r == l)
    {
        if (s.find("AB") == string::npos)
            cout << s << " ";
        return;
    }
    for (int i = l; i <= r; i++)
    {
        swap(s[i], s[r]);
        permutation(s, l + 1, r);
        swap(s[i], s[r]);
    }
}
int main()
{
    string s = "ABC";
    permutation(s, 0, 2);
    return 0;
}