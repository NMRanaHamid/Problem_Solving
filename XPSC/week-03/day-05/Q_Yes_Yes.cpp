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

void solve()
{
     string s;
        cin>>s;
        ll n = s.size(),f=0;
        if(s=="YES") cout<<"NO\n";
        else {
       // transform(s.begin(), s.end(), s.begin(),::tolower);
        if(n==1)
        {
            if(s=="e" || s=="Y" || s=="s") cout<<"YES\n";
            else cout<<"NO\n";
        }
        else if(n==2)
        {
            for(ll i=0; i<n-1;i++)
            {
                if(s[i]=='e' && s[i+1]=='s') cout<<"YES\n";
                else if(s[i]=='Y' && s[i+1]=='e') cout<<"YES\n";
                else if(s[i]=='s' && s[i+1]=='Y') cout<<"YES\n";
                else cout<<"NO\n";
            }
        }
        else
        {
 
                for(ll i=0; i<n-1;i++)
                {
                    if(s[i]=='e' && s[i+1]=='s') f = 1;
                    else if(s[i]=='Y' && s[i+1]=='e') f=1;
                    else if(s[i]=='s' && s[i+1]=='Y') f=1;
                    else {f=0; break;}
                }
                if(f==1)cout<<"YES\n";
                else cout<<"NO\n";
 
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