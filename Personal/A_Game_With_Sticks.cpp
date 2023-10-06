#include<bits/stdc++.h>

using namespace std ;

int main()
{
    int  n,m;
    cin>>n>>m;
    // solve 1 :
    cout<<((min(m,n)&1)?"Akshat":"Malvika")<<endl;


    // solve 2 :

    // char ar[n][m];
    // for(int i=0; i<n; i++)
    // {
    //     for(int j=0; j<m; j++) ar[i][j]='0';
    // }
    // bool f = 1;
    // for(int i=0; i<n; i++)
    // {
    //     for(int j=0; j<m;j++)
    //     {
    //         if(f and ar[i][j]=='0')
    //         {
    //             for(int k=0; k<n; k++) ar[k][j]='a';
    //             for(int k=0; k<m; k++) ar[i][k]='a';
    //             f=0;
    //         }
    //         else if(f==0 and ar[i][j]=='0')
    //         {
    //             for(int k=0; k<n; k++) ar[k][j]='m';
    //             for(int k=0; k<m; k++) ar[i][k]='m';
    //             f=1;
    //         }
    //     }
    // }
    // cout<<(ar[n-1][m-1]=='a'?"Akshat":"Malvika")<<endl;

    
    return 0 ;
}
