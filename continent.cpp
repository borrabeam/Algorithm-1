#include<iostream>
#include<string.h>
#include<stack>

using namespace std;
char arr[100][100];
char ch,ch1;
typedef pair<int,int> pii;
pii pr;
int m,n;

int dfs(int x,int y)
{
 pr=pii(x,y);
 stack<pii> st;
 st.push(pr);
 int count=0;
 arr[x][y]=ch1;
 while(!st.empty())
 {
  pr=st.top();
  st.pop();
  x=pr.first;
  y=pr.second;
  count++;
  if(x>0 && arr[x-1][y]==ch) 
  {
   pr=pii(x-1,y);
   st.push(pr);
   arr[x-1][y]=ch1;
  }
  if(x<m && arr[x+1][y]==ch) 
  {
   pr=pii(x+1,y);
   st.push(pr);
   arr[x+1][y]=ch1;
  }
  
  if(y>0 && arr[x][y-1]==ch) 
  {
   pr=pii(x,y-1);
   st.push(pr);
   arr[x][y-1]=ch1;
  }
  if(y<n && arr[x][y+1]==ch) 
  {
   pr=pii(x,y+1);
   st.push(pr);
   arr[x][y+1]=ch1;
  }

   if(y==0 && arr[x][n]==ch) 
  {
   pr=pii(x,n);
   st.push(pr);
   arr[x][n]=ch1;
  }
  if(y==n && arr[x][0]==ch) 
  {
   pr=pii(x,0);
   st.push(pr);
   arr[x][0]=ch1;
  }
 }
 return count;
}

void init(int x,int y)
{
 dfs(x,y);
}

int main()
{
 int i,j,x,y,max,count;
 while(cin>>m>>n)
 {
  m--;
  n--;
  for(i=0;i<=m;i++)
   cin>>arr[i];
  cin>>x>>y;
  ch=arr[x][y];
  if(ch=='#')
   ch1='*';
  else
   ch1='#';
  init(x,y);
  max=0;
  for(i=0;i<=m;i++)
  {
   for(j=0;j<=n;j++)
   {
    if(arr[i][j]==ch)
    {
     count=dfs(i,j);
     if(max<count)
      max=count;
    }
   }
  }
  cout<<max<<endl;
 }
 return 0;
}

