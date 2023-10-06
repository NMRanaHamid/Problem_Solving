#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n,i=1; cin>>n; int ar[n];
    int ev=0,od=0,ans,res ;
    while(i<=n)
    {
        int a; cin>>a;
        if(a&1){od++;ans=i; }
        else {ev++; res=i ;}
        i++;
    }   
    if(od==1) cout<<ans<<endl;
    else cout<<res<<endl;
    
    return 0 ;
}