#include<bits/stdc++.h>

using namespace std ;

int main()
{
    int n;
    cin>>n;
    int ar[n+1];
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        ar[a]=i+1;
    }
    for(int i=1;i<=n;i++) cout<<ar[i]<<" ";
    cout<<endl;
    
    return 0 ;
}