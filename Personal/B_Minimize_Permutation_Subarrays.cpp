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
     v32 pos(n+1,0) , a(n+1) ;
     for(int i=1; i<=n; i++)
     {
        cin>>a[i]; pos[a[i]]=i;
     }
     if((pos[n]>pos[1] and pos[n]<pos[2]) or (pos[n]<pos[1] and pos[n]>pos[2]) )
     {
        cout<<pos[1]<<" "<<pos[2]<<nl;
     }
     else if(pos[n]<pos[1] and pos[1]<pos[2])
     { 
        cout<<pos[n]<<" "<<pos[1]<<nl;
     }
     else if(pos[n]<pos[2] and pos[2]<pos[1])
     { 
        cout<<pos[n]<<" "<<pos[2]<<nl;
     }
     else if(pos[n]>pos[2] and pos[2]>pos[1])
     { 
        cout<<pos[n]<<" "<<pos[2]<<nl;
     }
     else if(pos[n]>pos[1] and pos[1]>pos[2])
     { 
        cout<<pos[n]<<" "<<pos[1]<<nl;
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

        // cout << "Case #" << it << ": ";
          solve(); 

       }

   return 0;
}