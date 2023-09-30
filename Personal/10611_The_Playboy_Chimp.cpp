#include<bits/stdc++.h>

using namespace std ;

int main()
{
    int n; cin>>n;
    int ar[n];
    for(int i=0; i<n; i++) cin>>ar[i];
    int q;
    cin>>q;
    while(q--)
    {
        int h ; cin>>h;
        int lb = lower_bound(ar,ar+n,h)-ar-1;
        int ub = upper_bound(ar,ar+n,h)-ar;    
        // cout<<lb<<" "<<ub<<endl;
        if(lb<0 or lb==n) cout<<"X"<<" "<<ar[ub]<<endl;
        else if(ub==n) cout<<ar[lb]<<" "<<"X"<<endl;
        else cout<<ar[lb]<<" "<<ar[ub]<<endl;
    }
    
    return 0 ;
}