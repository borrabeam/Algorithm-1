#include <stdio.h>
#include <iostream>
using namespace std;
#define MAX 50005
int T,N;
int vis[MAX], f[MAX], c[MAX];
int m, mu;
 
int dfs(int u){
    int v = f[u];
    int r = 0;
    vis[u] = 1;
    if(!vis[v])
        r = dfs(v) + 1;
    vis[u] = 0;
    c[u] = r;
    return r;
}
 
int main(){
    int t,i,u,v;
    cin >> T;
    for(t=1;t<=T;t++){
        cin >> N;
        for(i=1;i<=N;i++){
            cin >> u >> v;
            f[u] = v;
            vis[u] = 0;
            c[u] = -1;
        }
        m = -1;
        for(i=1;i<=N;i++){ 
            if(c[i]==-1) dfs(i);
            if(c[i]>m){
                m=c[i];
                mu=i;
            }
            
        }
        cout << "Case " << t << ": " << mu << endl;
    }
    return 0;
}