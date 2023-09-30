#include<bits/stdc++.h>

using namespace std;


int main()
{
    
    long long n; cin>>n;
    long long m = pow(2,n-1);
    if(n==1) cout<<1<<endl;
    else if(n==2) cout<<2<<endl;
    else 
    {
        long long ans = 0;
        
        long long x = n-2;
        long v = pow(2,x);
        for(long long i=0; i<m; i++) ans+=v;
        cout<<ans<<endl;
    }

    return 0 ;
}