#include <bits/stdc++.h>
using namespace std;
// normal recursion
class solution
{
public:
    int lcs(string s1, string s2, int m, int n)
    {
        if (m == 0 || n == 0)
            return 0;
        if (s1[m - 1] == s2[n - 1])
        {
            return 1 + lcs(s1, s2, m - 1, n - 1);
        }
        else
            return max(lcs(s1, s2, m - 1, n), lcs(s1, s2, m, n - 1));
    }
};
// tabulation
class dyanmic
{
public:
    int lcs(string s1, string s2, int m, int n)
    {
        int dp[m + 1][n + 1];
        for (int i = 0; i <= m; i++)
        {
            dp[i][0] = 0;
        }
        for (int i = 0; i <= n; i++)
        {
            dp[0][i] = 0;
        }
        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (s1[i - 1] == s2[j - 1])
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                else
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
        return dp[m][n];
    }
};

int main()
{
    string s1 = "aacakdbacaa", s2 = "aacabdkacaa";
    int m = s1.length(), n = s2.length();
    solution ob1;
    // cout << ob1.lcs(s1, s2, m, n);
    // cout << endl;
    dyanmic ob2;
    cout << ob2.lcs(s1, s2, m, n);

    return 0;
}

// varitaion of lcs
/*
    1.Diff utility
    In this programm we take lcs of two string, and find the difference b/w
    these type of program are used in github to check what is differnce b/w previous
    commited code and this code

    2. Minimum insertion and deletion to convert s1 to s2
    In this programm we find the LCS of strings (l) then
    no of deletion to be make  = m-l
    and no of addition to be make = n-1
*/