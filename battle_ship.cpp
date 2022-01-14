#include <iostream>

#define MAX 101
#define DFS_WHITE -1
#define DFS_BLACK 1
using namespace std;
int matriz[MAX][MAX], dfs_matriz[MAX][MAX], grid;
bool flag;

void initGraph()
{
string str = "", tmp;
    for(int a=0; a<grid; a++)
    {
        cin>>tmp;
        str+=tmp;
    }

    int index = 0;
    for(int x=0; x<grid; x++)
        for(int y=0; y<grid; y++,index++)
        {
            matriz[x][y] = str[index];
            if(matriz[x][y] == 'x' || matriz[x][y] == '@')
                dfs_matriz[x][y] = DFS_WHITE;
            else
                dfs_matriz[x][y] = 0;
        }
}

void dfs(int x, int y)
{
    if(matriz[x][y] == 'x')
       flag = true;
    dfs_matriz[x][y] = DFS_BLACK;
    int a=x, b=y;
            if(a-1 >= 0)
            {
                if(dfs_matriz[a-1][b] == DFS_WHITE)
                    dfs(a-1, b);
            }
            if(a+1 < grid)
            {
                if(dfs_matriz[a+1][b] == DFS_WHITE)
                    dfs(a+1, b);
            }
            if(b-1 >= 0 && dfs_matriz[a][b-1] == DFS_WHITE)
                dfs(a,b-1);
            if(b+1 < grid && dfs_matriz[a][b+1] == DFS_WHITE)
                dfs(a,b+1);
}

int main()
{
int casos, ships;
cin >> casos;

for(int a=1; a<=casos; a++)
{
    cin >> grid;
    initGraph();
    ships = 0;

    for(int x=0; x<grid; x++)
        for(int y=0; y<grid; y++)
        {
            if( (matriz[x][y] == 'x' || matriz[x][y] == '@') && dfs_matriz[x][y] == DFS_WHITE)
            {
                flag = false;
                dfs(x,y);
                if(flag == true)
                   ships++;
            }
        }
    cout << "Case " << a << ":" << " " << ships << endl;
}


return 0;

}