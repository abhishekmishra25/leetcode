#include <bits/stdc++.h>
using namespace std;
// vector<int> graph[];
// class form_graph
// {
// public:
//     void insert_in_graph(int x, int y)
//     {
//         graph[x].push_back(y);
//         graph[y].push_back(x);
//     }
// };

class solution
{
public:
    int prims(vector<int> graph[], int v)
    {
        int *key = new int[v];
        fill(key, key + v, INT_MAX);
        key[0] = 0;
        int res = 0;
        bool *mset = new bool[v];
        for (int count = 0; count < v; count++)
        {
            int u = -1;
            for (int i = 0; i < v; i++)
            {
                if (!mset[i] && (u == -1 || key[i] < key[u]))
                    u = i;
            }
            mset[u] = true;
            res = res + key[u];
            for (int a = 0; a < v; a++)
            {
                if (graph[u][a] != 0 and !mset[a])
                    key[a] = min(key[a], graph[u][a]);
            }
        }

        delete[] key;
        delete[] mset;

        return res;
    }
};

int main()
{
    vector<int> graph[4];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            int x;
            cin >> x;
            graph[i].push_back(x);
        }
    }
    solution ob1;
    cout << ob1.prims(graph, 4) << endl;
    return 0;
}