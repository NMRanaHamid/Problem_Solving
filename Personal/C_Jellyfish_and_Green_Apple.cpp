#include<bits/stdc++.h>
#define ll long long 
#define pii pair<int,int> 

using namespace std ;
const int N = 1e5+5;
const int NN = 1e3+5;
int inf = INT_MAX;
ll Inf = 1e18;
int n,m,e;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        n%=m;
        // if(n%m==0) cout<<0<<endl;
        ll ans = 0,i=0;
        while(i<=31)
        {
            if(n%m==0) break;
            else 
            {
               n = n%m;
               ans+=n;
               n = (n*2)%m;
            }
            i++;
        }
        if(n%m==0) cout<<ans<<endl;
        else cout<<-1<<endl;
    }
    
  
  return 0;
}