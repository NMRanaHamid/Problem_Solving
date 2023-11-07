#include<bits/stdc++.h>
#define nl "\n"
using namespace std ;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int i,ar[3];
        for(i=0; i<3; i++) cin>>ar[i];
        if(count(ar,ar+3,0)>=2) cout<<"Water filling time"<<nl;
        else cout<<"Not now"<<nl;
    }
    
    return 0 ;
}