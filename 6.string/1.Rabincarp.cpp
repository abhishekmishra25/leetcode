#include <bits/stdc++.h>
using namespace std;

#define mod 1e+9

void RBsearch(string pat, string text, int m, int n)
{
    int h = 1;
    for (int i = 0; i < n; i++)
    {
        h = (h * d) % mod;
    }
    int p = 0, t = 0;
    for (int i = 0; i < m; i++)
    {
        p = (p * d + pat[i]) % q;
        t = (t * d + text[i]) % q;
    }
    for (int i = 0; i <= n - m; i++)
    {
        if (p == t)
        {
            bool flag = true;
            for (int j = 0; j < m; j++)
                if (text[i + j] != pat[j])
                {
                    flag = false;
                    break;
                }
            if (flag == true)
                cout << i << " ";
        }
        if (i < n - m)
        {
            t = ((d * (t - text[i] * h) + text[i + m]) % mod);
            if (t < 0)
                t = t + mod;
        }
    }
    // if()
}
signed main()
{
    int n = 0, m = 0;
    string text = "Apna Sapna Money monay";
    string pat = "na";
    RBsearch(pat, text, pat.length(), text.length());
    return 0;
}