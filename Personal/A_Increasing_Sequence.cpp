#include<bits/stdc++.h>
#define nl "\n"

using namespace std ;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int ar[n];
        int ans = 0;
        for(int i=0; i<n; i++) 
        {
            cin>>ar[i];
            if(ans+1!=ar[i]) ans++;
            else ans+=2;
        }
        cout<<ans<<nl;
    }
    
    return 0 ;
}