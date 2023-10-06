#include<bits/stdc++.h>
#define ll long long
using namespace std ;

int main()
{
    ll t;
    cin>>t;
    while (t--)
    {
        ll a,b,n;
        cin>>a>>b>>n;
        ll ar[n];
        for(ll i=0; i<n; i++) cin>>ar[i];
        sort(ar,ar+n);
        ll ans = b-1;
        b-=(b-1);
        for(ll i=0; i<n; i++)
        {
            b+=ar[i];
            if(b>=a) b=a-1;
            else b-=1;
            ans+=b;
            b=1;
        }
        cout<<ans+1<<endl;
    }
    
    
    return 0 ;
}