#include<bits/stdc++.h>

using namespace std ;

int main()
{
    int n,m;
    cin>>n>>m;
    int ans = 0;
    if(n==m ) cout<<ans<<endl;
    else if(m%n) cout<<-1<<endl;
    else 
    {
        int d = m/n;
        while(d%2==0) 
        { 
            ans++;
            d/=2;
        }
        while(d%3==0) 
        {
            ans++;
            d/=3;
        }
        if(d==1) cout<<ans<<endl;
        else cout<<-1<<endl;
    }
    return 0 ;
}