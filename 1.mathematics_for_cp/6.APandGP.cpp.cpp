#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Arithmetic progression is special sequence
    // in which element are arrange in particular order
    // such that first element is added by a common difference
    cout << "enter the first element of the AP and common differece" << endl;
    int a, d;
    cin >> a >> d;
    cout << endl;
    cout << " enter the a number to find the nth term : ";
    int n;
    cin >> n;
    cout << " nth term of Ap is " << (a + (n - 1) * d) << endl;
    cout << " sum n term of Ap is : " << n * (2 * a + (n - 1) * d) / 2;
    return 0;
}