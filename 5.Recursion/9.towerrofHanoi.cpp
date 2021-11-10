#include <bits/stdc++.h>
using namespace std;

// tower of hanoi is considred a hard problem because
// it is mearly hard to draw recursion tree
// so it very hard and conceptiual

void THO(int n, int a, int b, int c)
{
    if (a == 0)
    {
        return;
    }
    TOH(n - 1, a, b, c);
    cout << "move disc for " << a << " to " << c << endl;
    TOH(n - 1, b, a, c);
}

int main()
{
    int n;
    TOH(2, 1, 2, 3);
    return 0;
}