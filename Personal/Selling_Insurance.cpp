#include<bits/stdc++.h>

using namespace std ;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ans = (100*10)/(n*2);
        if((100*10)%(n*2)) ans++;
        cout<<ans<<endl;

    }
    
    return 0 ;
}