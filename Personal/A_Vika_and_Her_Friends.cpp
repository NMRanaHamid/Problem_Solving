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
#define abs(x) (x<0?(-x):x)
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
     int m; cin>>m; 
     int k; cin>>k;
    // cout<<n<<" "<<m<<" "<<k<<nl;
     int a,b;
     cin>>a>>b;
   // cout<<a<<" "<<b<<nl;
   bool f = 0;
     while(k--)
     {
        int c,d;
        cin>>c>>d;
        int x = a-c, y = b-d;
        //cout<<a<<" "<<b<<" "<<c<<" "<<d<<nl;
        if(x<0) x=-x;
        if(y<0) y=-y;
        if(x==y)
        {
            f=1;
        }
     }
     if(f) cout<<"NO"<<nl;
     else cout<<"YES"<<nl;
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

        //  cout << "Case #" << it << ": ";
          solve(); 

       }

   return 0;
}