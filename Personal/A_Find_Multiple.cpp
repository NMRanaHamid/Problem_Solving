#include<bits/stdc++.h>

using namespace std ;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int ans = -1;
    for(int i=1; ; i++)
    {
        if(c*i<=b and c*i >=a)
        {
            ans=c*i;
            break;
        }
        if(c*i > b) break;
    }
    cout<<ans<<endl;
    
    
    return 0 ;
}