#include <bits/stdc++.h>

using namespace std;
class soluction
{
public:
    void conve(int ar1[], int ar2[], int n, int m)
    {
        int i = 0, j = 0;
        while (i < n and j < m)
        {
            if (ar1[i] == ar2[j])
            {
                cout << ar1[i] << " ";
            }
            else if (ar1[i] > ar2[j])
            {
                j++;
            }
            else
            {
                i++;
            }
        }
        }
};
int main()
{
    int ar1[] = {1, 2, 3, 5, 7, 15};
    int ar2[] = {4, 5, 6, 8, 9, 15, 23, 34};
}