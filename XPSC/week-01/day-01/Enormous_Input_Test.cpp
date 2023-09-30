#include<bits/stdc++.h>

using namespace std ;

int main()
{
    int n,k,ans=0;
    cin>>n>>k;
    while(n--)
    {
        int t;
        cin>>t;
        if(t%k==0) ans++;
    }
    cout<<ans<<endl;
    
    return 0 ;
}