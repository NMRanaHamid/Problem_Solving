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


void solve()
{
     int n,m; cin>>n>>m;
     int ans[n][m]={0,0};
     int a = 1, b=0;
     for(int i=0; i<n; i+=2)
     {
        for(int j=0; j<m; j+=2)
        {
            ans[i][j]=a;
            ans[i][j+1]=b;
            ans[i+1][j]=a^1;
            ans[i+1][j+1]=b^1;
            swap(a,b);
        }
        a=ans[i+1][0], b=ans[i+1][1];
     }
     for(int i=0; i<n; i++)
     {
        for(int j=0; j<m; j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<nl;
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
       cin >> t;
       for(int it=1;it<=t;it++)
       {

         //cout << "Case #" << it << ": ";
          solve(); 

       }

   return 0;
}