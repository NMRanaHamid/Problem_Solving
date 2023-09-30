#include<bits/stdc++.h>

using namespace std ;

void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a==b) cout <<0<<endl;
    else 
    {
        int n = (a+b)/2;
        int m = max(n-min(a,b), max(a,b)-n);
        int ans = m/c;
        if(m%c) ans++;
        cout<<ans<<endl;
    }
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        solve();
    }
    
    return 0 ;
}