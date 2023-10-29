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
     string a,b;
        cin>>a>>b;
        int n=a.length();
        int m=b.length();
        int c=a[n-1];
        int d=b[m-1];
        int r=max(c,d);
 
        if(a==b) cout<<'='<<endl;
        else if(n>m)
        {
            if(c==d && a[n-1]=='S')cout<<'<'<<endl;
            else if(c==d && (a[n-1]=='L' || a[n-1]=='M'))cout<<'>'<<endl;
            else if(c>d)cout<<'<'<<endl;
            else if(c<d)cout<<'>'<<endl;
        }
        else if(n<m)
        {
            if(c==d && a[n-1]=='S')cout<<'>'<<endl;
            else if(c==d && (a[n-1]=='L' || a[n-1]=='M'))cout<<'<'<<endl;
            else if(c<d)cout<<'>'<<endl;
            else if(c>d)cout<<'<'<<endl;
 
        }
        else if(n==m)
        {
            if(c==d)cout<<'='<<endl;
            else if(c>d)cout<<'<'<<endl;
            else if(c<d)cout<<'>'<<endl;
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