#include<bits/stdc++.h>
#define ll long long 
#define pii pair<int,int> 

using namespace std ;
const int N = 1e5+5;
const int NN = 1e3+5;
int inf = INT_MAX;
ll Inf = 1e18;
int n,m,e;

vector<pii> adj[N];
bool visited[N];
int dist[N];
int par[N]; 

void dijkstra(int s)
{
    priority_queue<pii,vector<pii>,greater<>> pq;
    pq.push({0,s});
    dist[s]=0;
    while(!pq.empty())
    {
        pii pr = pq.top();
        pq.pop();
        int pcost = pr.first ;
        int par = pr.second ;
        for(auto ch : adj[par])
        {
            int ccost = ch.second;
            int child = ch.first ;
            if(dist[child]>pcost+ccost)
            {
                dist[child] = pcost+ccost ;
                pq.push({dist[child],child});
            }
        }
    }
}

int main()
{
    cin>>n>>e;
    while(e--)
    {
        int u,v,w;
        cin>>u>>v>>w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
    for(int i=1; i<=n;i++)
    {
        dist[i]=inf ;
    }
    dijkstra(1);
    for(int i=1; i<=n;i++) 
    {
        cout<<dist[i]<<" ";
    }
    cout<<endl;
  
  return 0;
}