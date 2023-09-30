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
     int n,m; cin>>n>>m;
     int mul = n*m, mm = min(m,n);
     int ar[mul];
     for(int i=0; i<mul; i++) cin >>ar[i];
     sort(ar,ar+mul);
     int mn = ar[0], mnn = ar[1], mx = ar[mul-1], mxx = ar[mul-2];
     ll ans = (mul-mm)*(mx-mn) + (mm-1)*(mx-mnn);
     ll res = (mul-mm)*(mx-mn) + (mm-1)*(mxx-mn);
    // cout<<ans<<" "<<res<<nl;
     cout<<max(ans,res)<<nl;
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

        // cout << "Case #" << it<< ": ";
          solve(); 

       }
return 0;
}