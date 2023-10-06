#include<bits/stdc++.h>
#define ll long long
using namespace std ;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll ans = INT_MAX, mn = INT_MAX, mnn=INT_MAX ;
        while(n--)
        {
            ll a; cin>>a;
            string s; cin>>s;
            if(s=="11") ans = min(ans,a);
            else if(s=="10") mn = min(mn,a);
            else if(s=="01") mnn = min(mnn,a);
        }
        if(mn==INT_MAX or mnn==INT_MAX)
        {
            if(ans!=INT_MAX) cout<<ans<<endl;
            else cout<<-1<<endl;
        }
        else 
        {
            if(ans==INT_MAX)
            {
                cout<<mn+mnn<<endl;
            }
            else 
            {
                cout<<min(ans,mn+mnn)<<endl;
            }
        }


    }
    
    return 0 ;
}