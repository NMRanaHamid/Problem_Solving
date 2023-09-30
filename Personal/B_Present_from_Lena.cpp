#include<bits/stdc++.h>

using namespace std ;

int main()
{
    int n;
    cin>>n;
    for(int i=-n; i<=n; i++)
    {
        int sp = 2*abs(i);
        for(int j=0; j<sp; j++) cout<<" ";
        int mx = n-abs(i);
        for(int j=0; j<mx; j++) cout<<j<<" ";
        for(int j=mx; j>0;j--) cout<<j<<" ";

        cout<<0<<endl;
    }
    
    return 0 ;
}
