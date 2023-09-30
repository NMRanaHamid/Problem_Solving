#include<bits/stdc++.h>

using namespace std ;

int main()
{
    int n;
    cin>>n;
    int ans ,s=0;
    int ar[7];
    for(int i=0;i<7; i++) cin>>ar[i];
    int i=0;
    while(true)
    {
        s+=ar[i];
        if(s>=n)
        {
            ans = i+1;
            break;
        }
        i++;
        if(i==7) i=0;
    }
    cout<<ans<<endl;
    
    return 0 ;
}