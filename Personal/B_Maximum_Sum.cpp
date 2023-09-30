#include <bits/stdc++.h>
#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>
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
ll MOD = 998244353;
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
     int n,k; cin>>n>>k;
     v64 ar(n), pref(n+1), suf(n+1) ;
     ll sum = 0;
     for(int i=0; i<n; i++)
     {
       cin>>ar[i]; sum+=ar[i];
     }
     sort(all(ar));
     pref = ar, suf = ar ;
     for(int i=1; i<n; i++) pref[i]+=pref[i-1];
     reverse(all(suf));
     for(int i=1; i<n; i++) suf[i]+=suf[i-1];
     suf.push_back(0);
     pref.push_back(0);
     sort(all(suf));  
     sort(all(pref));
   //   for(int i=0; i<=n; i++) cout<<pref[i]<<" ";
   //   cout<<nl;
   //   for(int i=0; i<=n; i++) cout<<suf[i]<<" ";
   //   cout<<nl;
     ll ans = 0;
     for(int i=0; i<=k; i++)
     {
        // cout<<pref[2*i]<<" "<<suf[k-i]<<" " << sum-pref[2*i]-suf[k-i]<<nl;
         ans = max(ans, sum-pref[2*i]-suf[k-i]);
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

       ll t=1;
       cin >> t;
       for(int it=1;it<=t;it++)
       {

         //cout << "Case #" << it+1 << ": ";
          solve(); 

       }
return 0;
}