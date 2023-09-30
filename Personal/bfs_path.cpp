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

void bfs(int s)
{
    queue<int> q;
    q.push(s);
    visited[s]=1;
    par[s]=-1;
    dist[s]=0;
    while(!q.empty())
    {
        int p = q.front();
        q.pop();
        for(auto ch: adj[p])
        {
            if(visited[ch]) continue;
            q.push(ch);
            visited[ch]=1;
            par[ch]=p;
            dist[ch]=dist[p]+1;
        }
    }
}

int main()
{
    cin>>n>>e;
    while(e--)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bfs(1);
    int dis;
    cin>>dis;
    if(visited[dis])
    {
        vector<int> ans ;
        while(dis!=-1)
        {
            ans.push_back(dis);
            dis=par[dis];
        }
        reverse(ans.begin(),ans.end());
        for(auto val : ans) cout<<val<<" ";
        cout<<endl;
    }
    else 
    {
        cout<<"Not visited"<<endl;
    }
    
  
  return 0;
}