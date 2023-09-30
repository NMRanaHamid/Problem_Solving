#include<bits/stdc++.h>
#define ll long long 
#define pii pair<int,int> 

using namespace std ;
const int N = 1e5+5;
const int NN = 1e3+5;
int inf = INT_MAX;
ll Inf = 1e18;
int n,m,e;
vector<int> adj[N];
bool visited[N];
int dist[N];
int par[N];
int psize[N];
void dsu_set(int n)
{
    for(int i=1; i<=n;i++)
    {
        par[i]=-1;
        psize = 1;
    }
}
int dsu_find(int s)
{
    while(par[s]!-1)
    {
        s=par[s];
    }
    return s;
}
void dsu_union(int a,int b)
{
    int la = dsu_find(a);
    int lb = dsu_find(b);
    if(la!=lb)
    {
        if(psize[la]>psize[lb])
        {
            par[lb] = la ;
            psize[la] += psize[lb]; 
        }
        else 
        {
            par[la]=lb;
            psize[lb]+=psize[la];
        }
    }
}
int main()
{
    cin>>n>>e;
    dsu_set();
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        dsu_union(a ,b);
    }
    
  
  return 0;
}