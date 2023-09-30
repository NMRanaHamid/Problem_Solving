#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
const int inf = 1e7 ;
ll mod = 1e9+7;
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())

class Edge{
    public :
    int u,v,w;
    Edge(int u, int v, int w)
    {
        this->u=u;
        this->v=v;
        this->w=w;
    }
};

void solve()
{
     int n,m;
     cin>>n>>m;
     vector<Edge> vec ;
     for(int i=0; i<m; i++)
     {
        int u,v,w;
        cin>>u>>v>>w;
        Edge ed(u,v,w);
        vec.push_back(ed);
     }
     int dis[n+1];
     for(int i=1; i<=n; i++) dis[i]=inf ;
     dis[1]=0;
     for(int i=1; i<n; i++)
     {
        for(int j=0; j<vec.size(); j++)
        {
            Edge ed = vec[j];
            int u = ed.u , v = ed.v, w = ed.w;
            if(dis[u]+w<dis[v])
            {
                dis[v] = dis[u] + w ;
            }
        }
     }
     for(int i=1; i<=n; i++)
     {
        if(dis[i]==inf) cout<<30000<<" ";
        else cout<<dis[i]<<" ";
     }
}


int32_t main()
{

       #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
       #endif
       fast_cin();

       int t=1;
    //    cin >> t;
       for(int it=1;it<=t;it++)
       {

        //   cout << "Case #" << it << ": ";
          solve(); 

       }

   return 0;
}