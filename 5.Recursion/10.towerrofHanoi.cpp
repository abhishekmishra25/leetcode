#include <bits/stdc++.h>
using namespace std;

// tower of hanoi is considred a hard problem because
// it is mearly hard to draw recursion tree
// so it very hard and conceptiual

void TOH(int n, char A, char B, char C)
{
    if (n == 1)
    {
        cout << "move 1 from " << A << " to " << C << endl;
        return;
    }
    TOH(n - 1, A, C, B);
    cout << "move disc  " << n << " from " << A << " to " << C << endl;
    TOH(n - 1, B, A, C);
}

int main()
{
    int n;
    char A = 'A', B = 'B', C = 'C';
    TOH(2, A, B, C);
    return 0;
}