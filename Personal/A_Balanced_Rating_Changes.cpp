#include<bits/stdc++.h>

using namespace std ;

int main()
{
    int n;
    cin>>n;
    int odd = 1;
    int ar[n];
    for(int i=0; i<n; i++) cin>>ar[i];
    for(int i=0; i<n; i++) 
    {
        if(ar[i]%2)
        {
            cout<<(ar[i]+odd)/2<<endl;
            odd*=-1;
        }
        else cout<<ar[i]/2<<endl;
    }
    
    return 0 ;
}