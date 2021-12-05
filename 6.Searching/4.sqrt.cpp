#include <bits/stdc++.h>

using namespace std;

// nive soluction taking sqrt(n) so it prety basic
class Nive
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

// best soouction
class better
{
public:
    int sqroot(int x)
    {
        int low = 1, high = x, ans = 0;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            int msq = mid * mid;
            if (msq == x)
                return mid;
            else if (msq > x)
                high = mid - 1;
            else
            {
                low = mid + 1;
                ans = 0;
            }
        }
        return -1;
    }
};
// man function
int main()
{
    int x = 25;
    Nive ob1;
    cout << ob1.sqroot(x) << endl;
    better ob2;
    cout << ob2.sqroot(x) << endl;
    return 0;
}