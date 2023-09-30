#include<bits/stdc++.h>

using namespace std ;

int main()
{
    int n; cin>>n;
    string ans ;
    while(n>0 and n%7!=0) ans+='4',n-=4;
    while(n>0 and n%7==0) ans+='7',n-=7;
    // cout<<n<<endl;
    if(n==0) cout<<ans<<endl;
    else cout<<-1<<endl;
    
    return 0 ;
}