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

bool prime[100008];


void solve()
{
     int n; cin>>n;
     v32 ar(n);
     ll cnt = 0;
     for(int i=0; i<n; i++) { cin>>ar[i]; if(ar[i]==1) cnt++;}
     if(cnt <= 1) cout<<0<<nl;
     else 
     {
        ll pair = (cnt*(cnt-1LL))/2LL;
        ll c = 0;
        // for(int i=0; i<n; i++) cout<<prime[ar[i]]<<" ";
        // cout<<nl;
        // for(int i=0; i<n; i++) cout<<ar[i]<<" ";
        for(int i=0; i<n; i++) 
        {
            if(ar[i]>1 and prime[ar[i]]==0) c++;
        }
        //cout<<c<<nl;
        ll ans = pair * c * 1LL;
        cout<<ans<<nl;

     }

}


int32_t main()
{

       #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
       #endif
       fast_cin();
    //    for(int i=2; i<=100005; i++) cout<<prime[i]<<" ";
    //    cout<<nl;
       for(int i=2; i*i<=100005;i++)
       {
         if(prime[i]==0)
         {
            for(int j=i*i; j<=100005; j+=i)
            {
                prime[j]=1;
            }
         }
       }
    //    for(int i=2; i<=100005; i++) cout<<prime[i]<<" ";
    //    cout<<nl;

       int t=1;
       cin >> t;
       for(int it=1;it<=t;it++)
       {

        // cout << "Case #" << it << ": ";
          solve(); 

       }

   return 0;
}