#include<bits/stdc++.h>
#define ll long long 
#define pii pair<int,int> 

using namespace std ;
const int N = 1e5+5;
const int NN = 1e3+5;
int inf = INT_MAX;
ll Inf = 1e18;
int n,m,e;

int par[NN];
int plevel[NN];
void dsu_set()
{
    for(int i=1;i<=n;i++)
    {
        par[i]=-1;
        plevel[i]=0;
    }
}
int dsu_find(int a)
{
    while(par[a]!=-1)
    {
        a = par[a];
    }
    return a; 
}
void dsu_union(int a,int b)
{
    int la = dsu_find(a);
    int lb = dsu_find(b);
    if(la!=lb)
    {
        if(plevel[la]>plevel[lb])
        {
            par[lb]=la;
        }
        else if(plevel[lb]>plevel[la])
        {
            par[la]=lb;
        }
        else 
        {
            par[lb]=la;
            plevel[la]++;
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
        dsu_union(a,b);
    }
    
  
  return 0;
}