#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
ll mod = 1e9+7;
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())


void solve()
{
     int n,a,d;
     cin>>n>>a>>d;
     if(a==0 and d==0)
     {
        cout<<-1<<nl;
        return ;
     }
     if(a>0 and d>0)
     {
        cout<<-1<<nl;
        return ;
     }
     if(a==0) swap(a,d);
     if(a==1)
     {
       cout<<1<<" ";
        for(int i=2; i<=n-1; i++)
        {
            cout<<(i+1)<<" ";
        }
        cout<<nl;
        return ;
     }
     if((n-1)%a!=0)
     {
        cout<<-1<<nl;
        return ;
     }
     ll p = 1, pp = 2, w = 0;
     for(int i=1; i<=n-1; i++)
     {
        cout<<p<<" ";
        w++;
        if(w==a)
        {
            if(i==n-1) break;
            cout<<pp+1<<" ";
            p=pp+1;
            pp=p+1;
            i++;
            w=1;
            continue;
        }
        pp++;
     }
     cout<<nl;

}


int32_t main()
{

       #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
       #endif
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