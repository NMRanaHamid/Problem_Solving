#include<bits/stdc++.h>

using namespace std ;

int main()
{
    int n;
    cin>>n;
    int ar[n+1];
    for(int i=1;i<=n;i++) cin>>ar[i];
    int a , b , mn = INT_MAX, mx=INT_MIN;
    for(int i=1;i<=n;i++)
    {
        if(mn>=ar[i])
        {
            mn = ar[i];
            a = i ;
        }
        if(mx<ar[i])
        {
            mx = ar[i];
            b = i;
        }
    }
    // cout<<a<<" "<<b<<endl;
    if(a==n and b==1) cout<<0<<endl;
    else 
    {
        int ans = (n-a)+(b-1);
        if(a<b) ans--;
        cout<<ans<<endl;
    }
    
    return 0 ;
}