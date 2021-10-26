#include <bits/stdc++>
using namespace std;
int table[256];
void initialize()
{
    table[0] = 0;
    for (int i = 1; i < 256; i++)
    {
        table[i] = (1 & i) + table[i / 2];
    }
}
int main()
{
}