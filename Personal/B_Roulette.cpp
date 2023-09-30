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
     int n; cin>>n;
     map<int,vector<int>> mp ;
     for(int k = 1; k<=n; k++)
     {
        int a; cin>>a;
        vector<int> ar(a);
        for(int i=0; i<a; i++) cin>>ar[i];
        mp[k] = ar ;
     }
     int x ; cin>>x; 
     map<int,int> ans ;
     for(auto v : mp)
     {
        for(auto a : v.second)
        {
            if(a==x)
            {
                // cout<<v.first<<" "<<v.second.size();
                ans[v.first] = v.second.size();
            }
        }
     }
     vector<int> res ;
     sort(ans.begin(), ans.end());
     for(int i=1; i<n; i++)
     {
        
     }
     if(res.size()==0) cout<<0<<endl;
     else {
        cout<<res.size()<<endl;
        for(auto a : res) cout<<a<<" ";
     }
}


int32_t main()
{

       #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
       #endif
       fast_cin();

       int t=1;
    //    cin >> t;
       for(int it=1;it<=t;it++)
       {

        //   cout << "Case #" << it << ": ";
          solve(); 

       }

   return 0;
}