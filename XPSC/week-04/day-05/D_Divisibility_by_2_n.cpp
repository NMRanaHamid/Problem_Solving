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
// ll Mod = 1e9+7;
// int mod = 1e9+7;
// double pie = 3.141592653589793 ;
// int inf = INT_MAX;
// ll Inf = 1e18 ;

/********define global variable here********/

/*******************Code Start from here**********/

void solve()
{
     int n,i,k; cin>>n;
    //  vii ar(n); 
     int sum = 0;
     fori(i,0,n)
     {
         cin>>k;
         while(k%2==0)
         {
            sum++;
            k/=2;
         }
     }
    //  cout<<sum<<nl;
     if(sum>=n)
     {
        cout<<0<<nl;
        return ;
     }   
     vii v;
     int x,sm2;
     for(i = 1; i <= n; i++)
        {
            x = 0, sm2 = i;
            while(sm2 % 2 == 0)
            {
                sm2 = sm2 / 2;
                x++;
            }
            v.push_back(x);
        }
        sort(v.begin(), v.end(), greater<long long>());
    //  for(auto a : v) cout<<a<<" ";
     sort(v.rbegin(),v.rend());
     int ans=0;
     fori(i,0,v.size())
     {
        sum+=v[i];
        ans++;
        if(sum>=n) break;
     }
     if(sum>=n) cout<<ans<<nl;
     else cout<<-1<<nl;
     
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