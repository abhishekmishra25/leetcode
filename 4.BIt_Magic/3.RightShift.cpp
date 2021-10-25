#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x = 33;
    cout << (x >> 1) << endl;
    cout << (x >> 2) << endl;
    int y = 4;
    cout << (x >> y) << endl;
    // NOT operator in c++
    unsigned int z = 1;
    cout << (~z) << endl;
    z - 5;
    cout << (~z) << endl;
    int k = 1;
    cout << (~k) << endl;
    k = 5;
    cout << (~k) << endl;
    return 0;
}