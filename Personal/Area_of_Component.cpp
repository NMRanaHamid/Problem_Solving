#include<bits/stdc++.h>
#define pii pair<int,int>
using namespace std ;
const int N = 1e3+5;
bool visited[N][N];
char adj[N][N];
int n,m;
vector<pii> path = {{-1,0},{1,0},{0,1},{0,-1}};
bool valid(int ci, int cj)
{
    return (ci>=0 and ci<n and cj>=0 and cj<m and adj[ci][cj]=='.');
}
int dfs(int si, int sj)
{
    if(!valid(si,sj)) return 0 ;
    if(visited[si][sj]) return 0;
    visited[si][sj] = 1;
    int ans = 1;
    for(int i=0; i<4; i++)
    {
        pii pt = path[i];
        int ci = pt.first+si;
        int cj = pt.second+sj;
        if(valid(ci,cj) and !visited[ci][cj])
        {
            ans+=dfs(ci,cj);
        }
    }
    return ans ;
}
int main()
{
    cin>>n>>m;
    for(int i=0;i<n; i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>adj[i][j];
        }
    }
    int ans = INT_MAX;
    for(int i=0;i<n; i++)
    {
        for(int j=0; j<m;j++)
        {
            if(adj[i][j]=='.' and !visited[i][j])
            {
                ans = min(ans,dfs(i,j));
            }
        }
    }
    if(ans!=INT_MAX) cout<<ans<<endl;
    else cout<<-1<<endl;
    return 0 ;
}