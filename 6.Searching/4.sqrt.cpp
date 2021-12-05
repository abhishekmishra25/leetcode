#include <bits/stdc++.h>

using namespace std;

class soluction
{
public:
    int sqroot(int x)
    {
        int i = 1;
        for (; i * i <= x; i++)
        {
            // hello world
        }
        return i - 1;
    }
};

// man function
int main()
{
    int x = 25;
    soluction ob1;
    cout << ob1.sqroot(x) << endl;
    return 0;
}