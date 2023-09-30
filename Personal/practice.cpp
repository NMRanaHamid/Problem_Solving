#include <bits/stdc++.h>

using namespace std;

// rename macro of operations using typedef
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef pair<double,double> pdd;
typedef vector<ll> vll;
typedef vector<int> vii;
typedef vector<vector<int> > vvii;
typedef vector<vector<ll> > vvll;

// rename macro of opearations using define
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define ppb pop_back
#define ff first
#define ss second
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sij(x) ((ll)(x).size())

// const values 
ll Mod = 1e9+7;
int mod = 1e9+7;
double pie = 3.141592653589793 ;
int inf = INT_MAX;
ll Inf = 1e18 ;
const int N = 1e5+5;
/********define global variable here********/
vii adj[N];
bool visited[N];
int dist[N];
int par[N];
/*******************Code Start from here**********/

void dfs(int s)
{
    visited[s]=1;
    cout<<s<<" ";
    for(auto val : adj[s])
    {
        if(visited[val]) continue;
        dfs(val);
    }
}
void bfs(int s)
{
    visited[s]=1;
    dis[s]=0;
    queue<int> q;
    q.push(s);
    while(!q.empty())
    {
        int s = q.front();
        q.pop();
        cout<<s<<" ";
        for(auto ch : adj[s])
        {
            if(visited[ch]) continue; 
            dis[ch] = vis[s]+1;
            q.push(ch);
            visited[ch]=1;
        }
    }
}
void bfs_path(int s)
{
    visited[s]=1;
    dis[s]=0;
    par[s]=-1;
    queue<int>q;
    q.push(s);
    while(!q.empty())
    {
        int s = q.front();
        q.pop();
        for(auto ch : adj[s])
        {
            if(visited[ch]) continue;
            visited[ch]=1;
            par[ch]=s;
            dis[ch]=dis[s]+1;
            q.push(ch);
        }
    }
}
void path_print(int d)
{
    if(!vis[d]) 
    {
        cout<<"No path "<<nl;
        return;
    }
    vii ans ;
    int a = d;
    while(a!=-1)
    {
        ans.pb(a);
        a=par[a];
    }
    reverse(all(ans));
    for(auto val : ans) cout<<val<<" ";
    cout<<nl;
}
void solve()
{
     int n,e;
     cin>>n>>e;
     while(e--)
     {
        int u,v;
        cin>>u>>v;
        adj[u].pb(v);
        adj[v].pb(u);
     }
}

int32_t main()
{
     fast_cin();

     int t=1;
    //  cin >> t;
     for(int it=1;it<=t;it++)
     {
        // cout << "Case #" << it << ": ";
        solve(); 
     }

   return 0;
}