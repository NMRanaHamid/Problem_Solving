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
        int ar[n];
        int ans=0;
        for(int i=0;i<n; i++)
        {
            cin>>ar[i];
        }
        sort(ar,ar+n);
        for(int i=1; i<n; i++) ans+=ar[i];
        cout<<ans<<endl;
    }
    
    return 0 ;
}