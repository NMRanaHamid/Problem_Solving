#include<bits/stdc++.h>
#define ll long long 
#define nl "\n"
#define pii pair<int,int> 

using namespace std ;
const int N = 1e5+5;
const int NN = 1e3+5;
int inf = INT_MAX;
ll Inf = 1e18;
int n,m,e;

void solve()
{
    int n; cin>>n;
    map<int,int> mp ;
    while(n--)
    {
        int a; cin>>a;
        mp[a]++;
    }
    int ans = -1;
    for(auto a : mp) 
    {
        if(a.second>=3)
        {
            ans = a.first;
            break;
        }
    }
    cout<<ans<<nl;
}

int main()
{
     int t; 
     cin>>t;
     while(t--)
     {
        solve();
     }
  
  return 0;
}