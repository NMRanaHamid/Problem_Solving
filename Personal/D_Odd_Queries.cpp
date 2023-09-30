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
     int n; cin>>n;
     int k; cin>>k;
     vector<ll> ar(n+2), v(n+2);
     for(int i=1; i<=n; i++) cin>>ar[i];
     v = ar;
     for(int i=1; i<=n; i++) ar[i]+=ar[i-1];
     for(int i=n-1; i>=1; i--) v[i]+=v[i+1];
     while(k--)
     {
        int l,r,a;
        cin>>l>>r>>a;
        ll sum = (r-l+1)*a;
        l--, r++;
        sum+=ar[l]+v[r];
        //cout<<sum<<nl;
        cout<<((sum&1)?"YES":"NO")<<nl;
     }
    //  for(int i=0; i<=n; i++) cout<<v[i]<<" ";
    //  cout<<nl;


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

        // cout << "Case #" << it+1 << ": ";
          solve(); 

       }
return 0;
}