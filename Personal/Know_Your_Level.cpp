#include<bits/stdc++.h>

using namespace std ;

const int N = 1e5+5;
vector<int> adj[N];
bool visited[N];
map<int,int> level ;

void dfs(int a)
{
    queue<int> q;
    q.push(a);
    visited[a] = 1;
    level[a] = 0 ;
    while(!q.empty())
    {
        int p = q.front();
        q.pop();
        for(auto c : adj[p])
        {
            if(visited[c]) continue;
            visited[c] = 1;
            level[c] = level[p]+1;
            q.push(c);
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
    int l;
    cin>>l;
    dfs(0);
    vector<int> ans ;
    for(auto a : level)
    {
        if(a.second==l)
        {
            ans.push_back(a.first);
        }
    }
    sort(ans.begin(), ans.end());
    if(ans.size()==0) cout<<-1<<endl;
    else 
    {
        for(auto a : ans)
        {
            cout<<a<<" ";
        }
        cout<<endl;
    }

    return 0 ;
}