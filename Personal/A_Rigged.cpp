#include<bits/stdc++.h>

using namespace std ;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n; cin>>n;
        pair<int,int> ar[n] ;
        for(int i=0; i<n;i++) cin>>ar[i].first>>ar[i].second ;
        bool flag = 1 ;
        for(int i=1; i<n ; i++)
        {
            if(ar[i].first>=ar[0].first and ar[i].second>=ar[0].second)
            {flag = 0 ;
            break;}
        }
        flag? cout<<ar[0].first:cout<<"-1";
        cout<<endl;
    }
    
    return 0 ;
}