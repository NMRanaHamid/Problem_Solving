#include<bits/stdc++.h>
#define ll long long
using namespace std ;

int main()
{
    ll n;
    cin>>n;
    ll ar[n];
    ll ans = 0,c=0;
    ll mn = INT_MAX ;
    for(ll i=0; i<n; i++)
    {
        cin>>ar[i];
        ans+=ar[i];
        if(ar[i]&1) mn = min(mn,ar[i]); 
    }
    if(ans%2) ans-=mn;
    cout<<ans<<endl;
        
    
    return 0 ;
}