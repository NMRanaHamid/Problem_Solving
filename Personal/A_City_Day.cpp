#include<bits/stdc++.h>
#define ll long long
using namespace std ;

int main()
{
    ll n,x,y;
    cin>>n>>x>>y;
    ll ar[n+1];
    ll ans = n;
    for(ll i=1; i<=n; i++) cin>>ar[i];
    for(ll i=1; i<=n; i++)
    {
        // int j=1;
        bool flag = 0;
        for(ll j=1; j<=x; j++)
        {
            // cout<<ar[i-j]<<" ";
            if(i-j<=0) break;
            if(ar[i]>=ar[i-j])
            {
                flag = 1;
                break;
            }
        }
        for(ll j=1; j<=y; j++)
        {
            // cout<<ar[i+j]<<" "; 
            if(i+j > n) break;
            if(ar[i]>=ar[i+j])
            {
                flag = 1;
                break;
            }
        }
        // cout<<i<<" ";
        if(!flag)
        {
            ans=i;
            break;
        }
        // cout<<endl;
        
    }
    // if(ans) cout<<ans<<endl;
    // else cout<<n<<endl;
    cout<<ans<<endl;
    
    return 0 ;
}