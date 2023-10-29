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
     int n,i,j=1; cin>>n;
     string s ; cin>>s;
     s.push_back('x');
     s.push_back('x');
     s.push_back('x');
     map<int,char> mp ;
     for(char c = 'a'; c<='z'; c++)
     {
        mp[j++] = c;
     }
     string ans;
     fori(i,0,n)
     {
        if(s[i]=='1' or s[i]=='2')
        {
            if(s[i+2]=='0' and s[i+3]!='0')
            {
                string x = s.substr(i,2);
                int a = stoi(x);
                // cout<<a<<" ";
                ans+=mp[a];
                i++;
            }
            else 
            {
                int a = s[i]-'0';
                ans+=mp[a];
            }
        }
        else if(s[i]=='0') continue;
        else 
        {
            int a = s[i]-'0';
            ans+=mp[a];
        }
     }
     cout<<ans<<nl;
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