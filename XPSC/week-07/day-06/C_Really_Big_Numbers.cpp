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
ll Inf = 1e18+9 ;
ll inff = __LONG_LONG_MAX__ ;

/********define global variable here********/

/*******************Code Start from here**********/

bool big_num(ll m,ll s)
{
    ll x = 0,k=m;
    while(k)
    {
        x+=(k%10);
        k/=10;
    }
    return (m-x>=s);
}

void solve()
{
     ll n,s,i,j; cin>>n>>s;
     ll l=1,r=n;
     ll mn = inff ;
    //  cout<<mn<<" ";
     while(l<=r)
     {
        ll m = l+(r-l)/2;
        if(big_num(m,s))
        {
            mn = min(m,mn);
            r=m-1;
        }
        else l=m+1;
     }
    //  cout<<mn<<" ";
     ll x = n-mn+1;
     if(x<0) cout<<0<<nl;
     else cout<<x<<nl;
}

int32_t main()
{
     fast_cin();

     int t=1;
    //  cin >> t;
     for(int it=1;it<=t;it++)
     {
        // cout << "Case #" << it << ": ";
        solve(); 
     }

   return 0;
}