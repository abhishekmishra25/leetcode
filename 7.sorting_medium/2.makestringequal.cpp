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
        map<char, int>::iterator xt = mp2.begin();
        // auto xt = mp2.begin();
        for (auto it : mp1)
        {
            if (it.second == xt.second)
            {
                xt++;
            }
            else
            {
                cout << " error occured" << endl;
                return;
            }
        }
    }
};
int main()
{
    string s1 = "geeksforgeeks";
    string s2 = "skeegrofskeeg";
    soluction ob1;
    ob1.fuck_you(s1, s2);
    return 0;
}