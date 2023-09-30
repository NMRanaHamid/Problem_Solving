#include<bits/stdc++.h>

using namespace std ;

int main()
{
    int n;
    cin>>n;
    int ar[n+1][n+1];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==1) ar[i][j]=j;
            else if(j==n) ar[i][j]=n;
            else if(i==n) ar[i][j]=n;
            else if(j==1) ar[i][j]=i;
            else ar[i][j]=0;
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(ar[i][j]) cout<<ar[i][j];
            else cout<<" ";
        }
        cout<<endl;
    }
    
    return 0 ;
}