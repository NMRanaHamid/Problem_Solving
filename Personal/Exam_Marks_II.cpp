#include<bits/stdc++.h>
const int mod = 1e9+7;
using namespace std ;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int ar[n];
        for(int i=0; i<n; i++)
        {
            cin>>ar[i];
        }
        int s = 1000-m;
        if(s==0)
        {
            cout<<"0"<<endl;
        }
        else
        {
            int dp[n+1][s+1];
            dp[0][0] = 1;
            for(int i=1; i<=s; i++)
                dp[0][i]=0 ;
            for(int i=1; i<=n; i++)
            {
                for(int j=0; j<=s; j++)
                {
                    if(ar[i-1]<=j)
                        dp[i][j] = ((dp[i][j - ar[i - 1]]%mod) + (dp[i - 1][j]%mod))%mod;
                    else 
                        dp[i][j] = (dp[i-1][j]%mod);
                }
            }
            cout<<dp[n][s]<<endl;

        }
    }
}