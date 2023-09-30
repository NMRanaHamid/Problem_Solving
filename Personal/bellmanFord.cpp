#include<bits/stdc++.h>
#define ll long long 
#define pii pair<int,int> 

using namespace std ;
const int N = 1e5+5;
const int NN = 1e3+5;
int inf = INT_MAX;
ll Inf = 1e18;
int n,m,e;


bool visited[N];
int dist[N];
int par[N];

class edge
{
    public:
    int u,v,w;
    edge(int u, int v, int w)
    {
        this->u=u;
        this->v=v;
        this->w= w;
    }
};
vector<edge> adj;

int main()
{
    cin>>n>>e;
    while(e--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        edge ed = edge(a,b,c);
        adj.push_back(ed);
    }
    for(int i=0;i<=n; i++) dist[i] = inf ;
    dist[1]=0;
    for(int i=1;i<=n; i++) cout<<dist[i]<<" ";
    for(int i=1; i<=n-1;i++)
    {
        for(int j=0; j<adj.size(); j++)
        {
            edge ed = adj[j];
            int a = ed.u ;
            int b = ed.v;
            int c = ed.w;
            if(dist[a]+c<dist[b])
            {
                dist[b]=dist[a]+c;
            }
        }
    }
    for(int i=1; i<=n; i++) cout<<dist[i]<<" ";
    cout<<endl;
  
  return 0;
}