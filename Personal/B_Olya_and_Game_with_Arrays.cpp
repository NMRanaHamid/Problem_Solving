#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<ll,ll> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<ll> v32;
typedef vector<vector<ll> > vv32;
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
     ll q; cin>>q;
     vector<pair<ll,ll>> vp;
    for(ll i=0; i<q; i++)
    {
        ll n; cin>>n;
        ll ar[n];
        for(ll i=0; i<n;i++) cin>>ar[i];
        sort(ar,ar+n);
        vp.pb({ar[0],ar[1]});
    }
    ll ans = 0;
    ll mx = ll_MIN , mn = ll_MAX;
    for(auto v : vp)
    {
        ans+=v.second ;
    }
    ll i ,k;
    for(ll j=0; j<vp.size(); j++)
    {
        if(mx<ans-vp[j].second)
        {
            i = j ;
            mx = max(ans-vp[j].second, mx);
        }
        mn = min(mn,vp[j].first);
    }
    cout<<mx+mn<<nl;
}


int32_t main()
{

       #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
       #endif
       fast_cin();

       ll t=1;
       cin >> t;
       for(ll it=1;it<=t;it++)
       {

        //   cout << "Case #" << it << ": ";
          solve(); 

       }

   return 0;
}