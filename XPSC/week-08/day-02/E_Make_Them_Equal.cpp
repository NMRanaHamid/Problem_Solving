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
     int n,i,k,kk,j; char c; string s;
     cin>>n>>c>>s;
    //  map<int,int> mp;
    vii jor,bijor ,v;
     int cnt =0;
     fori(i,0,n)
     {
        if(s[i]!=c)
        {
            cnt++;
            if((i+1)&1) bijor.pb(i+1);
            else jor.pb(i+1);
        }
     }
     if(cnt==0) cout<<0<<nl<<nl;
     else 
     {
        fori(i,n/2,n) 
            if(s[i]==c) 
            {
                v.pb(i+1); break;
            }
        if(v.size()==0) v.pb(n),v.pb(n-1);
        cout<<v.size()<<nl;
        cout<<v.front();
        if(v.size()==2) cout<<" "<<v.back();
        cout<<nl;
     }

}

// 3 c
// ucg

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


