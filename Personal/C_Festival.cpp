#include<bits/stdc++.h>

using namespace std ;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> a(n+2,n);
    // for(auto v : a) cout<<v<<" ";
    // cout<<endl;
    while(m--){
        int x;
        cin>>x;
        a[x]=x;
    }
    // for(auto v : a) cout<<v<<" ";
    // cout<<endl;
    for(int i=n-1; i>=1; i--){
        // cout<<a[i]<<" "<<a[i+1];
        a[i]=min(a[i],a[i+1]);
        // cout<<" "<<a[i]<<endl;
    }
    for(int i=1; i<=n; i++){
        cout<<a[i]-i<<endl;
    }
    
    return 0 ;
}