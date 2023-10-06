#include<bits/stdc++.h>
#define fori(i,s,n) for(i=s; i<n; i++)
using namespace std ;

int main()
{
    int n,i,a=0,b=0,ans=0,sum=0;
    cin>>n;
    int ar[n];
    fori(i,0,n) { cin>>ar[i]; sum+=ar[i];}
    sort(ar,ar+n);
    // cout<<sum<<endl;
    for(int i=n-1; i>=0; i--)
    {
        a+=ar[i];
        sum-=ar[i];
        ans++;
        // cout<<a<<" "<<sum<<endl;
        if(a>sum)
        {
            break;
        }
    }
    cout<<ans<<endl;
    
    return 0 ;
}