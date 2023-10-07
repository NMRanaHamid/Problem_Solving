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

bool isprime(int n)
{
    int i;
    if(n<=1) return 0;
    for(i=2; i*i<=n; i++)
    {
        if(n%i==0) return 0;
    }
    return 1;
}
int prime(int n)
{
    int cnt =0;
    for(int i=1; i<=n;i++)
    {
        if(n%i==0)
        {
            if(isprime(i)) cnt++;
            if(cnt>=3) break;
        }
    }
    return cnt ;
}
void solve()
{
     int n; cin>>n;
     int ans = 0;
     for(int i=1; i<=n; i++)
     {
        if(prime(i)==2) ans++;

     }
     cout<<ans<<nl;
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