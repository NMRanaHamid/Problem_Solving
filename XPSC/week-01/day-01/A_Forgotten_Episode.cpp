#include<bits/stdc++.h>

using namespace std ;

int main()
{
    int n,ans=-1;
    cin>>n;
    int ar[n-1];
    for(int i=0; i<n-1; i++) cin>>ar[i];
    sort(ar,ar+n-1);
    for(int i=0; i<n-1; i++) 
    {
        if(ar[i]!=i+1)
        {
            ans=i+1;
            break;
        }
    }
    if(ans!=-1) cout<<ans<<endl;
    else cout<<n<<endl;
    
    return 0 ;
}