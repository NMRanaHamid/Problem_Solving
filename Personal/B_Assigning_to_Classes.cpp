#include<bits/stdc++.h>

using namespace std ;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int ar[2*n];
        for(int i=0;i<2*n; i++) cin>>ar[i];
        sort(ar,ar+2*n);
        int ans = abs(ar[n]-ar[n-1]);
        cout<<ans<<endl;
    }
    
    
    return 0 ;
}