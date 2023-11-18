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
     string s; cin>>s;
     int i,n=s.size();
     map<char,int> mp;
     fori(i,0,n)
     {
        mp[s[i]]++;
     }
     bool f=0;
     for(auto a : mp)
     {
        if(a.ss&1 and f==0) f=1;
        else if(a.ss&1 and f)
        {
            cout<<"NO SOLUTION"<<nl;
            return;
        }
     }
     string x,y;
     char b='a';
     for(char c = 'A'; c<='Z'; c++)
     {
        if(mp[c]&1)
        {
            b=c ;
            mp[c]--;
        }
        if(mp[c]>0)
        {
            fori(i,0,mp[c]/2) x+=c;
            fori(i,0,mp[c]/2) y+=c;
        }
     }
     reverse(all(y));
    //  cout<<x<<b<<y<<nl;
    cout<<x;
    if(b!='a') cout<<b;
    cout<<y;
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