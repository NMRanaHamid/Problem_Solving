#include <bits/stdc++.h>

using namespace std;

// rename macro of operations using typedef
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef pair<double,double> pdd;
typedef vector<ll> vll;
typedef vector<int> vii;
typedef vector<vector<int> > vvii;
typedef vector<vector<ll> > vvll;

// rename macro of opearations using define
#define fori(i,s,n) for(i=s; i<n; i++)
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define ppb pop_back
#define ff first
#define ss second
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sij(x) ((ll)(x).size())

// const values 
ll Mod = 1e9+7;
int mod = 1e9+7;
double pie = 3.141592653589793 ;
int inf = INT_MAX;
ll Inf = 1e18 ;

/********define global variable here********/

/*******************Code Start from here**********/

void solve()
{
     int n,i,j,k; cin>>n;
     string s; cin>>s;
     ll mx = 0;
     vector<pii> p;
     fori(i,0,n)
     {
         if(s[i]=='L')
         {
             mx+=(i);
             p.pb({i,i+1});
         }
         else 
         {
            mx+=(n-1-i);
            p.pb({n-1-i,i+1});
         }
     }
   //   cout<<mx<<nl;
     sort(all(p));
     vll ans ;
   //   for(auto a: p) cout<<a.first<<" "<<a.second<<" |";
   //   cout<<nl;
     fori(i,0,n)
     {
        ll x = mx - p[i].first;
        mx = x +(max(p[i].first,n-1-p[i].first));
        ans.pb(mx);
     }
     for(auto a : ans) cout<<a<<" ";
     cout<<nl;

}

int32_t main()
{
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