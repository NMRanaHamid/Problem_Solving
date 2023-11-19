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
typedef vector<string> vss;
typedef vector<pair<int,int>> vpi;
typedef vector<pair<ll,ll>> vpl;
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

ll bin(ll a,ll b)
{
   ll ans = 1;
   while(b>0)
   {
      if(b&1)
      {
         ans*=a;
         ans%=Mod;
      }
      a*=a;
      a%=Mod;
      b>>=1;
   }
   return ans ;
}

void solve()
{
     ll n,k,i,j; cin>>n>>k;
     ll ans = 0;
     for(i=0; i<64; ++i)
     {
       if((1LL<<i)&k)
       {
         // cout<<i<<" ";
         ans+=(bin(n,i));
         ans%=Mod;
         // cout<<bin(n,i)<<" "<<ans<<nl;
         // ans%=mod;
       }
     }
     cout<<ans%Mod<<nl;
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
      // cout<<bin(3,2)<<nl;
     }

   return 0;
}