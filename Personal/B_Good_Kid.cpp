#include<bits/stdc++.h>
#define ll long long

using namespace std ;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        ll ar[n];
        for(ll i=0; i<n;i++)
        {
            cin>>ar[i];
        }
        ll ans = 1;
        sort(ar,ar+n);
        ar[0]++;
        for(ll i=0; i<n;i++) ans*=ar[i];
        cout<<ans<<endl;
    }
    
    return 0 ;
}