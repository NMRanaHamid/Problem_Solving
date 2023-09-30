#include<bits/stdc++.h>

using namespace std ;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int ar[n];
        bool f = 0;
        for(int i=0;i<n; i++)
        {
            cin>>ar[i];
            if(ar[i]==k)
            {
                f = 1;
            }
        }
        if(f) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    return 0 ;
}