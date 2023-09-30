#include<bits/stdc++.h>

using namespace std ;
const int N = 1e5+5;
vector<int> adj[N];
bool visited[N];
int ans = 0;
void dfs(int a)
{
    queue<int> q;
    q.push(a);
    visited[a]=1;
    while(!q.empty())
    {
        int p = q.front();
        q.pop();
        for(auto ch : adj[p])
        {
            if(visited[ch]) continue;
            ans++;
            visited[ch]=1;
            dfs(ch);
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
    }
    int a;
    cin>>a;
    dfs(a);
    cout<<ans<<endl;
    
    return 0 ;
}