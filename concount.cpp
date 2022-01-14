#include <iostream>
#include <vector>
using namespace std;
#define MAX_N 200010

int n, m;
vector<int> adj[MAX_N];
int deg[MAX_N];
int count1 = 0;

bool visited[MAX_N];

void init()
{
    for (int i = 0; i < n; i++)
        visited[i] = false;
}

void dfs(int u)
{
    visited[u] = true;
    // cout << (u + 1) << endl;

    for (int d = 0; d < deg[u]; d++)
    {
        int v = adj[u][d];
        if (!visited[v])
        {
            dfs(v);
        }
    }
}

int main()
{

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        deg[i] = 0;
    }
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        u--;
        v--;
        adj[u].push_back(v);
        deg[u]++;
        adj[v].push_back(u);
        deg[v]++; 
    }

    init();
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            dfs(i);
            count1++;
        }
    }
    cout << count1 << endl;
}