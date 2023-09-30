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
     ll n,k; cin>>n>>k;
     v64 ar(n), v(n);
     v64 a(n) , ans;
     for(ll i=0; i<n; i++) cin>>ar[i];
     a = ar;
     for(ll i=0; i<n; i++) cin>>v[i];
     sort(all(ar));
     sort(all(v));
     map<ll,vector<ll>> mp;
     for(ll i=0; i<n; i++) mp[ar[i]].push_back(v[i]);
     for(ll i=0; i<n; i++)
     {
        ans.push_back(mp[a[i]].back());
        mp[a[i]].pop_back();
     }
     for(auto aa : ans) cout<<aa<<" ";
     cout<<nl;
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

         
          solve(); 

       }

   return 0;
}