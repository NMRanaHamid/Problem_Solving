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
void dfs(int si, int sj)
{
    visited[si][sj] = 1;
    for(int i=0; i<4; i++)
    {
        pii pt = path[i];
        int ci = pt.first+si;
        int cj = pt.second+sj;
        if(valid(ci,cj) and !visited[ci][cj])
        {
            dfs(ci,cj);
        }
    }
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
    int si,sj,di,dj;
    cin>>si>>sj>>di>>dj;
    dfs(si,sj);
    if(visited[di][dj]) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0 ;
}