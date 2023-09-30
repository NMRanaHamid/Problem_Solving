#include<bits/stdc++.h>
#define ll long long 
#define pii pair<int,int> 

using namespace std ;
const int N = 1e5+5;
const int NN = 1e3+5;
int inf = INT_MAX;
ll Inf = 1e18;
int n,m,e;

int main()
{
    
    string a,b;
    while(cin>>a && cin>>b)
    {
        int n = a.size(), m = b.size();
        int dp[n+1][m+1];
        for(int i=0;i<=n; i++)
        {
            for(int j=0;j<=m;j++)
            {
                if(i==0 || j==0)
                {
                    dp[i][j]=0;
                }
            }
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(a[i-1]==b[j-1])
                {
                    dp[i][j] = dp[i-1][j-1]+1;
                }
                else 
                {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }
        int mx = INT_MIN,ci=0,cj=0;
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=m;j++)
            {
                if(dp[i][j]>mx)
                {
                    mx = dp[i][j];
                    ci=i, cj=j;
                }
            }
        }
        string sadia ;
        while(ci && cj)
        {
            if(a[ci-1]==b[cj-1])
            {
                sadia+=a[ci-1];
                ci--,cj--;
            }
            else 
            {
                if(dp[ci-1][cj]>dp[ci][cj-1])
                {
                    ci--;
                }
                else cj--;
            }
        }
        reverse(sadia.begin(),sadia.end());
        // cout<<sadia<<endl;
        if(sadia==b) cout<<"Possible"<<endl;
        else cout<<"Impossible"<<endl;
    }
  
  return 0;
}