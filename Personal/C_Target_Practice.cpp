#include<bits/stdc++.h>

using namespace std ;

int main()
{
    int t; cin>>t;
    while (t--)
    {
       char ar[11][11];
       for(int i=1;i<=10;i++)
       {
        for(int j=1;j<=10;j++) cin>>ar[i][j];
       }
       int ans = 0;
       for(int i=1; i<=10;i++)
       {
        for(int j=1;j<=10;j++)
        {
            if(((i==1  or i==10) or (j==1 or j==10)) and ar[i][j]=='X') ans+=1;
            else if(((i==2 or i==9) or (j==2 or j==9)) and ar[i][j]=='X') ans+=2;
            else if(((i==3 or i==8) or (j==3 or j==8)) and ar[i][j]=='X') ans+=3;
            else if(((i==4 or i==7) or (j==4 or j==7)) and ar[i][j]=='X') ans+=4;
            else if(((i==5 or i==6) or (j==5 or j==6)) and ar[i][j]=='X') ans+=5;
        }
        // cout<<endl;
       }
        cout<<ans<<endl;

    }
    
    
    return 0 ;
}