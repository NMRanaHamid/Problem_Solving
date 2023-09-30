#include<bits/stdc++.h>

using namespace std ;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        char ar[n][m];
        for(int i=0; i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>ar[i][j];
            }
        }
        int ans = 0;
        for(int i=0; i<n-1;i++) if(ar[i][m-1]!='D') ans++;
        for(int i=0;i<m-1;i++) if(ar[n-1][i]!='R') ans++;
        cout<<ans<<endl;
    }
    
    return 0 ;
}