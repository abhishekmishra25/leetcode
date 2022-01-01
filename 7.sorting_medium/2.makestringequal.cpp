#include <bits/stdc++.h>

using namespace std;

class soluction
{
public:
    void fuck_you(string s1, string s2)
    {
        map<char, int> mp1;
        map<char, int> mp2;
        if (s1.length() != s2.length())
        {
            cout << " Length of both string does not match";
            return;
        }
        for (int i = 0; i < s1.length(); i++)
        {
            mp1[s[i]]++;
            mp2[s[i]]++;
        }
    }
};
int main()
{
    string s1 = "geeksforgeeks";
    string s2 = "skeegrofskeeg";
    return 0;
}