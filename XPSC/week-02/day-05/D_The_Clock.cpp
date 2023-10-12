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
bool palindrome(string s)
{
    int i, n = s.size();
    fori(i,0,n)
    {
        if(s[i]!=s[n-1-i]) return 0;
    }
    return 1;
}
void solve()
{
     string s; int i,j,n;
     cin>>s>>n;
     int hr = 0,mi=0;
     bool f=0;
     for(auto a : s)
     {
        if(a==':')
        {
            f=1; continue;
        }
        if(f)
        {
            // cout<<a<<" :"<<a-'0'<<nl;
            mi=((mi*10)+(a-'0'));
        }
        else hr=((hr*10)+(a-'0'));
        // cout<<hr<<" "<<mi<<nl;
     }
    //  cout<<hr<<" "<<mi<<nl;
    // int x = n/60,y=n%60;
    int ans = 0,tot=0;
    while(1)
    {
        tot+=n;
        mi+=n;
        hr+=(mi/60); 
        hr%=24;
        mi%=60;
        string r;
        if(hr<10) r+='0';
        r+=to_string(hr);
        // r+=':';
        if(mi<10) r+='0';
        r+=to_string(mi);
        // cout<<r<<nl;
        ans+=palindrome(r);
        if(tot%1440==0) break;
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