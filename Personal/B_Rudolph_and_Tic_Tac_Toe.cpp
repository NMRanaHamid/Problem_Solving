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
     vector<string> v;
     char ch = 'c';
     for(int i=0; i<3; i++)
     {
        string s ; cin>>s;
        v.pb(s);
        if(v.back()=="+++") ch='+';
        else if(v.back()=="OOO") ch='O';
        else if(v.back()=="XXX") ch='X';
     }
     if(ch!='c' and ch!='.') 
     {
        cout<<ch<<nl;
        return ;
     }
     if(v[0][0]==v[1][0] and v[1][0]==v[2][0] and v[0][0]!='.') ch = v[0][0];
     else if(v[0][1]==v[1][1] and v[1][1]==v[2][1] and v[1][1]!='.') ch = v[0][1];
     else if(v[0][2]==v[1][2] and v[1][2]==v[2][2] and v[0][2]!='.') ch = v[0][2];
     if(ch!='c' and ch!='.') 
     {
        cout<<ch<<nl;
        return ;
     }
     if(v[0][0]==v[1][1] and v[1][1]==v[2][2] and v[1][1]!='.') ch=v[0][0];
     else if(v[0][2]==v[1][1] and v[1][1]==v[2][0] and v[1][1]!='.') ch=v[1][1];
     if(ch!='c' and ch!='.')
     {
        cout<<ch<<nl;
        return ;
     }
     cout<<"DRAW"<<nl;

     
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

        //  cout << "Case #" << it << ": ";
          solve(); 

       }

   return 0;
}