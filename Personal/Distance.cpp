#include<bits/stdc++.h>

using namespace std ;
const int N = 1e5+5;
vector<int> adj[N];
bool visited[N];
int dist[N];

int dfs(int a, int b)
{
    memset(dist,-1,sizeof dist);
    memset(visited,0,sizeof visited);
    dist[a] = 0;
    visited[a] = 1;
    queue<int> q;
    q.push(a);
    while(!q.empty())
    {
        int p = q.front();
        q.pop();

        for(auto c : adj[p])
        {
            if(visited[c]) continue; 
            dist[c] = dist[p] + 1;
            visited[c] = 1;
            q.push(c);
        }
    }
    return dist[b];
}

int main()
{
    int n,e;
    cin>>n>>e;
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    int q;
    cin>>q;
    while(q--)
    {
        int s,d;
        cin>>s>>d;
        cout<<dfs(s,d)<<endl;
    }
    
    return 0 ;
}