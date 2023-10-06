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
        int ar[n+1];
        for(int i=1; i<=n; i++) cin>>ar[i];
        int v=-1,in=-1;
        int mx = INT_MIN;
        for(int i=1; i<=n; i++)
        {
            if(ar[i]>i)
            {
                v=ar[i];
                in = i;
                mx = max(mx,v-in);
            }
        }
        if(v==-1 and in==-1) cout<<0<<endl;
        else cout<<mx<<endl;
    }
    
    
    return 0 ;
}