#include <bits/stdc++.h>

using namespace std;

class solution
{
private:
    double multiply(double mid, int n)
    {
        double ans = 1;
        for (int i = 0; i < n; i++)
        {
            ans *= mid;
        }
        return ans;
    }

public:
    void NthrootOfM(int n, int m)
    {
        double high = m, low = 0;
        double esp = 1e-6;
        while (high - low > esp)
        {
            double mid = low + (high - low) / 2.0;
            if (multiply(mid, n) < m)
                low = mid;
            else
                high = mid;
        }
        cout << "Output by binary searrch" << endl;
        cout << low << "  " << high << endl;
        cout << " Output by fromula" << endl;
        cout << pow(m, (double)(1.0 / (double)n));
    }
};
signed main()
{
    int n, m;
    cin >> n >> m;
    solution oj;
    oj.NthrootOfM(n, m);
    return 0;
}