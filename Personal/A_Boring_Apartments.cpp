#include<bits/stdc++.h>

using namespace std ;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int ans = 0;
        int d = s.size();
        int a = s[0]-'0'-1;
        ans+=(a*10);
        ans+=(d*(d+1)/2);
        cout<<ans<<endl;
    }
    
    return 0 ;
}