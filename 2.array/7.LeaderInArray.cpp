#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<long long int> vll;
typedef vector<char> vc;
typedef long double ld;

typedef set<int>::iterator sit;
typedef map<int, int>::iterator mit;
typedef vector<int>::iterator vit;
typedef vector<long long int>::iterator vllit;

const int INF = 1e9 + 7;
const int MOD = 1e9 + 7;
const int MAXN = 1e6 + 3;

#define _ % MOD
#define __ %= MOD

#define each(it, s) for (vit it = s.begin(); it != s.end(); ++it)
#define sortA(v) sort(v.begin(), v.end())
#define sortD(v) sort(v.begin(), v.end(), greater<auto>())
#define fill(a) memset(a, 0, sizeof(a))

#define rep(i, n) for (int i = 0; i < (n); ++i)
#define repA(i, a, n) for (int i = a; i <= (n); ++i)
#define repD(i, a, n) for (int i = a; i >= (n); --i)
#define pq(x) priority_queue<x, std::vector<x>, compare>
#define rpq(x) priority_queue<x, std::vector<x>, compare>
#define fi first
#define se second
#define mp make_pair
#define pb push_back

#define fbo find_by_order
#define ook order_of_key

#define loop(i, start, end) for (auto i = (start < end) ? start : start - 1; (start < end) ? i < end : i >= end; (start < end) ? i++ : i--)
class nive
{
public:
    void leader(int arr[], int n)
    {
        for (int i = 0; i < n; i++)
        {
            bool flag = false;
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] < arr[j])
                {
                    flag = true;
                    break;
                }
            }
            if (flag == false)
            {
                cout << arr[i] << " ";
            }
        }
    }
};

class soluction
{
public:
    void Leader(int arr[], int n)
    {
        int curr_max = arr[n - 1];
        cout << curr_max << " ";
        for (int i = n - 1; i >= 0; i--)
        {
            if (arr[i] > curr_max)
            {
                cout << arr[i] << " ";
                curr_max = arr[i];
            }
        }
        return;
    }
};
int main()
{
    int arr[] = {7, 10, 4, 3, 6, 5, 2};
    int n = 7;
    soluction ob1;
    ob1.Leader(arr, n);
    nive bo2;
    cout << endl;
    bo2.leader(arr, n);

    return 0;
}