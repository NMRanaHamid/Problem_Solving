#include<bits/stdc++.h>

using namespace std ;
const int N=1e5+5;
vector<int> adj[N];
bool visited[N];
void dfs(int a,int& c)
{
    visited[a] = 1;
    queue<int> q;
    q.push(a);
    while(!q.empty())
    {
        int p = q.front();
        q.pop();
        for(auto v : adj[p])
        {
            if(visited[v]) continue;
            visited[v]=1;
            c++;
            dfs(v,c);
        }
    }
}
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
    vector<int> ans ;
    int c = 1;
    for(int i=0; i<=1000; i++)
    {
        if(visited[i]) continue; 
        dfs(i,c=1);
        ans.push_back(c);
    }
    sort(ans.begin(), ans.end());
    if(ans.size()==0) cout<<-1<<endl;
    else 
    {
        for(auto a : ans) if(a!=1) cout<<a<<" ";
        cout<<endl;
    }
    
    return 0 ;
}