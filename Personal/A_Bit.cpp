#include<bits/stdc++.h>

using namespace std ;

int main()
{
    int t;
    cin>>t;
    int ans = 0;
    while(t--)
    {
        string s; 
        cin>>s;
        if(s=="X++" or s=="++X") ans++;
        else if(s=="X--" or s=="--X") ans--;
    }
    cout<<ans<<endl;
    
    return 0 ;
}