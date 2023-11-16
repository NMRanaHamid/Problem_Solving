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
     int n; cin>>n;
     if(n==50) cout<<0<<nl;
     else if(n<50)
     {
        int x = 50-n;
        if(x%2==0) cout<<x/2<<nl;
        else 
        {
            int ans = 0;
            while(n<50)
            {
                n+=2,ans++;
            }
            ans+=(abs(n-50)*2);
            cout<<ans<<nl;
        }
     }
     else
     {
        int x = n-50;
        if(x%3==0) cout<<x/3<<nl;
        else 
        {
            int ans=0;
            while(n>52)
            {
                ans++,n-=3;
            }
            if(n==51) ans+=2;
            else if(n==52) ans+=4;
            cout<<ans<<nl;
        }
     }
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