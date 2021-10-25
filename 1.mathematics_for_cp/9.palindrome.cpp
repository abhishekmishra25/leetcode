#include <bits/stdc++.h>
using namespace std;

class soluction
{
public:
    void solve(int x)
    {
        int rev = 0;
        int temp = x;
        while (temp > 0)
        {
            int reminder = temp % 10;
            temp /= 10;
            rev = rev * 10 + reminder;
        }
        if (x == rev)
            cout << "it is a palindrome" << endl;
        else
        {
            cout << "it not a palindrome" << endl;
        }
    }
};

int main()
{
    int t;
    cin >> t;
    soluction ob;
    while (t--)
    {
        int x;
        cin >> x;
        ob.solve(x);
    }
}