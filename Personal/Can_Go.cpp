#include<bits/stdc++.h>
#define ll long long
using namespace std; 
#define pii pair<ll,ll> 
const ll N = 1e5+5;
vector<pii> adj[N];
ll dis[N];
ll n,e;
int main()
{
    cin>>n>>e;
    while(e--)
    {
        ll a,b,w;
        cin>>a>>b>>w;
        adj[a].push_back({b,w});
        adj[b].push_back({a,w});
    }
    
}