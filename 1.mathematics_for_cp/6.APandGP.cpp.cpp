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
    // return 0;
    // GP is a special sequence in which elements are arranged
    //  in such a way that first element is multiplied by
    //  common ratio
    int f, r;
    cout << "enter the first element of gp and common ratio : ";
    cin >> f >> r;
    cout << endl;
    cout << " mth term of gp is : " << (a * pow(r, m)) << endl;
    cout << " sum of m term is : " << a(pow(r, n) - 1) / (r - 1) << endl;
    return 0;
}