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
        int ar[n];
        ar[0] = 7;
        for(int i=1; i<n; i++)
        {
            ar[i] = ar[i-1]+3;
        }
        for(int i=0;i<n;i++) cout<<ar[i]<<" ";
        cout<<endl;
    }
    
    return 0 ;
}