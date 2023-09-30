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
     int n; cin>>n;
     v32 ar(n), vr(n);
     for(int i=0; i<n; i++) cin>>ar[i];
     for(int i=0; i<n; i++) cin>>vr[i];
     //int cnt = 1, mx1 = 0, mx2 = 0;
     unordered_map<int,int> a, v;
     int cnt = 1;
     for(int i=1; i<=n; i++)
     {
         if(i==n) { a[ar[i-1]] = max(cnt, a[ar[i-1]]); break;}
         if(ar[i]==ar[i-1]) cnt++;
         else 
         {
            a[ar[i-1]] = max(cnt, a[ar[i-1]]);
            cnt = 1;
         }
     }
   //   a[ar[0]] = max(cnt, a[ar[0]]);
   //   for(auto e : a) cout<<e.first<<" "<<e.second<<nl;
   //   for(auto e : v) cout<<e.first<<" "<<e.second<<nl;
     cnt = 1;
     for(int i=1; i<=n; i++)
     {
         if(i==n) { v[vr[i-1]]= max(cnt, v[vr[i-1]]); break; }
         if(vr[i]==vr[i-1]) cnt++;
         else 
         {
            v[vr[i-1]] = max(cnt, v[vr[i-1]]);
            cnt = 1;
         }
     }
   //   v[vr[0]] = max(cnt, v[vr[0]]);
     int ans = 0;
     for(auto e : ar)
     {
      ans = max(ans, a[e]+v[e]);
     }
     for(auto e : vr)
     {
      ans = max(ans, a[e]+v[e]);
     }
     cout<<ans<<nl;

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

        // cout << "Case #" << it << ": ";
          solve(); 

       }

   return 0;
}