#include<bits/stdc++.h>

using namespace std;

int main()
{
    
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        map<int,int> mp ;
        while(n--)
        {
            int a ; cin>>a;
            mp[a]++;
        }
        int ans = 0;
        for(auto a : mp)
        {
            if(a.second>1) ans+=(a.second-1);
        }
        cout<<ans<<endl;
    }

    return 0 ;
}