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
        int ans =0,c=0;
        for(int i=0; i<n; i++) cin>>ar[i];
        for(int i=0; i<n; i++)
        {
            if(ar[i]==0) c++;
            else 
            {
                ans=max(c,ans);
                c=0;
            }
        }
        ans=max(c,ans);
        cout<<ans<<endl;
    }
    
    return 0 ;
}