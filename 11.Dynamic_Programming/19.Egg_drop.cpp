#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>

using namespace std;

class solution
{
public:
    // resursive solution
    // In this question we have to find the minimum number of trails for
    // finding the three should floor for drooping egg
    int egg_drop_rec(int floor, int egg)
    {
        // we have to write the base case first
        // if thre is only one egg left then it does not make any sence
        // to check in random binary order
        if (egg == 1)
            return floor;
        // if there is only one or zero floor are left then
        // It will take only 1 or 0 moves
        if (floor == 1)
            return 1;
        if (floor == 0)
            return 0;
        // Now initializing the variables
        // To get min threeshould floor
        // we have to check for both the condition if egg break or not break
        int mi = INT_MAX, res;
        for (int x = 1; x <= floor; x++)
        {
            //                      if egg break        or         not break
            res = max(egg_drop_rec(x - 1, egg - 1), egg_drop_rec(floor - x, egg));
            // checking if if the current floor is threeshould floor or not
            if (res < mi)
                mi = res;
        }
        return mi + 1;
    }
};
class DpSolution
{
public:
    int eggDrop(int floor, int egg)
    {
        int *arr = new int[floor + 1];
        arr[0] = 0;
    }
};
int main()
{
    int floor, egg;
    cin >> floor >> egg;
    solution ob1;
    cout << ob1.egg_drop_rec(floor, egg);
    return 0;
}
