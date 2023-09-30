#include<bits/stdc++.h>
#define ll long long 
#define pii pair<int,int> 

using namespace std ;

const int N = 1e5+5;
const int NN = 1e3+5;
int inf = 1e7;
ll Inf = 1e18;
int n,m,e;

int main()
{
    cin>>n>>e;
    int dis[n+1][n+1];
    for(int i=1; i<=n; i++)
    {
        for(int j=1;j<=n;j++)
        {
            dis[i][j]=inf;
            if(i==j) dis[i][j]=0;
        }
    }
    while(e--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        dis[a][b]=c;
    }
    for(int k=1;k<=n;k++)
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(dis[i][j] > dis[i][k]+dis[k][j])
                {
                    dis[i][j] = dis[i][k]+dis[k][j];
                }
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<dis[i][j]<< " ";
        }
        cout<<endl;
    }
    
  
  return 0;
}