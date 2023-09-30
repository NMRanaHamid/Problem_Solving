#include<bits/stdc++.h>

using namespace std ;
const int N = 1e5+5;
vector<int> adj[N];
bool visited[N];
int ans = 0;

int main()
{
    int n,e;
    cin>>n>>e;
    while(e--)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int a;
    cin>>a;
    for(auto v : adj[a])
    {
        ans++;
    }
    cout<<ans<<endl;
    
    return 0 ;
}