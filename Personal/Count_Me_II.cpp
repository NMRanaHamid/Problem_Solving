#include<bits/stdc++.h>

using namespace std ;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n ;
        int mx = 0;
        map<long long , int> mp ;
        long long ans = INT_MIN ;
        for(int i=0 ; i<n; i++)
        {
            long long a ; cin>>a;
            mp[a]++;
            mx = max(mx, mp[a]);
        }
        for(auto val : mp)
        {
            if(val.second==mx)
            {
                ans = max(ans, val.first);
            }
        }
        cout<<ans<<" "<<mx<<endl;
    }
}