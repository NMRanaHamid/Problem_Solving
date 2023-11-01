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

void solve()
{
     int l,r,x,a,b;
     cin>>l>>r>>x>>a>>b;
     if(a==b) cout<<0<<nl;
     else if(b>=l and b<=r)
     {
        if(a+x>r and a-x<l) cout<<-1<<nl;
        else if(r-x<b and l+x>b) cout<<-1<<nl;
        else if(abs(a-b)>=x) cout<<1<<nl;
        else 
        {
            if(a-x==b or a+x==b) cout<<1<<nl;
            else if(a+x<=r and r-x>=b) cout<<2<<nl;
            else if(a-x>=l and l+x<=b) cout<<2<<nl;
            else cout<<3<<nl;
        }
     }
     else cout<<"-1"<<nl;
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