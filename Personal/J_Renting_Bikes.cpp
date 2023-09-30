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
     int n,m,k;
     cin>>n>>m>>k;
     v64 a(n), v(m);
     for(int i=0; i<n; i++) cin>>a[i];
     for(int i=0; i<m; i++) cin>>v[i];
     sort(all(a));
     sort(all(v));
     priority_queue<ll,vector<ll>, greater<ll> > pk;
     for(int i=0; i<m; i++) pk.push(v[i]);
     ll mon = 0, cnt = 0;
     for(int i=0; i<n; i++)
     {
        if(a[i]<pk.top() and a[i]+k>=pk.top())
        {
            cnt++ ;
            if(a[i]+k==pk.top()) mon+=a[i];
            else if(k>pk.top()) mon = mon + pk.top()-a[i];
            else mon = mon - abs(k-pk.top()) + a[i];
            k=k-pk.top()+a[i];
            pk.pop();
        }
        else if(a[i]>=pk.top())
        {
            cnt++;
            mon+=pk.top();
            pk.pop();
        }
        //cout<<cnt<<" "<<k<<" "<<mon<<nl;
     }
     cout<<cnt<<" "<<mon<<nl;
}


int32_t main()
{

       #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
       #endif
       fast_cin();

       ll t=1;
      // cin >> t;
       for(int it=1;it<=t;it++)
       {

        // cout << "Case #" << it+1 << ": ";
          solve(); 

       }
return 0;
}