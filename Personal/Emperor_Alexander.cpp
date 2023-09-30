#include<bits/stdc++.h>
#define ll long long 
#define pii pair<int,int> 

class Edge
{
    public :
    int u,v,w;
    Edge(int u,int v,int w)
    {
        this->u=u;
        this->v=v;
        this->w=w;
    }
};

bool comp(Edge a, Edge b)
{
    return a.w<b.w;
}

using namespace std ;
const int N = 1e5+5;
const int NN = 1e3+5;
int inf = INT_MAX;
ll Inf = 1e18;
int n,m,e;
vector<Edge> adj;
vector<Edge> ans ;
vector<int> gr[N];
bool visited[N];
int dist[N];
int par[N];
int plevel[N];

void dsu_set(int n)
{
    for(int i=1; i<=n;i++) 
    {
        par[i]=-1;
        plevel[i]=1;
    }
}
int dsu_find(int s)
{
    while (par[s] != -1)
    {
        s = par[s];
    }
    return s;
}
int cnt = 0;
void dfs(int s)
{
    visited[s]=1;
    cnt++;
    for(auto ch : gr[s])
    {
        if(visited[ch]) continue;
        dfs(ch);
    }
}
void dsu_union(int a, int b)
{
   int la = dsu_find(a);
    int lb = dsu_find(b);
    if (la != lb)
    {
        if (plevel[la] > plevel[lb])
        {
            par[lb] = la;
        }
        else if (plevel[lb] > plevel[la])
        {
            par[la] = lb;
        }
        else
        {
            par[lb] = la;
            plevel[la]++;
        }
    }
}

int main()
{
    cin>>n>>e;
    dsu_set(n);
    while(e--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        adj.push_back(Edge(a,b,c));
        gr[a].push_back(b);
        gr[b].push_back(a);

    }
    sort(adj.begin(),adj.end(),comp);
    ll sum = 0;
    int an=0;
    for(auto ed : adj)
    {
        int a = ed.u, b=ed.v , c=ed.w;
        int la = dsu_find(a), lb = dsu_find(b);
        if(la!=lb)
        {
            ans.push_back(ed);
            dsu_union(a,b);
            sum+=(long long)c;
        }
        else an++;
    }
    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            dfs(i);
            break;
        }
    }
    if(ans.size()==n-1)
    {
        cout<<an<<" "<<sum<<endl;
    }
    else 
    {
        cout<<"Not Possible"<<endl;
    }
    
  
  return 0;
}