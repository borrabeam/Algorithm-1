#include<queue>
#include<vector>
#include<iostream>
using namespace std;

vector <int>v[200];

int bfs(int node)
{
    int color[200]={0};
    int visit[200]={0};
    queue <int> q;
    q.push(node);
    color[node]=1;
    while (!q.empty())
    {
        int f=q.front();
        q.pop();
        int d=color[f]==1?2:1;
        int l=v[f].size();
        for (int i=0;i<l;i++)
        {
            node=v[f][i];
            if (color[f]==color[node]) return 0;
            if (!visit[node])
            {
                q.push(node);
                color[node]=d;
                visit[node]=1;
            }
        }
    }
    return 1;
}

int main()
{
    int n;
    int l;
    int a;
    int b;
    while (1)
    {
        cin >> n;
        if (n==0) 
        break;
        cin >> l;
        for (int i=0;i<l;i++)
        {
           cin >> a >> b;
           v[a].push_back(b);
           v[b].push_back(a);
        }
        if (bfs(0)) 
        cout << "BICOLORABLE." << endl;
        else 
        cout << "NOT BICOLORABLE." << endl;
        for (int i=0;i<n;i++) v[i].clear();
    }
    return 0;
}