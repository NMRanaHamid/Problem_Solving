#include<bits/stdc++.h>

using namespace std ;

int main()
{
    int n,h;
    cin>>n>>h;
    int ar[n];
    for(int i=0; i<n;i++) cin>>ar[i];
    int ans=0;
    for(int i=0; i<n; i++)
    {
        if(ar[i]<=h) ans++;
        else ans+=2;
    }
    cout<<ans<<endl;
    
    return 0 ;
}