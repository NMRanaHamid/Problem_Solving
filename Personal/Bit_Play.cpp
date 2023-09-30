#include<bits/stdc++.h>
#define ll long long 
int mod = 1e9+7;
using namespace std ;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        ll ans = 1;
        vector<ll> v;
        for(int i=2; i<n;i+=2)
        {
            char b1 = s[i-2], b2=s[i-1], b=s[i];
            if(b1!=b2)
            {
                if(b=='1') v.push_back(2);
                else v.push_back(1);
            }
            else if(b1=='1')
            {
                if(b=='1') v.push_back(2);
                else v.push_back(1);
            }
            else 
            {
                if(b=='1') v.push_back(0);
                else v.push_back(3);
            }
        }
        for(auto a : v)
        {
            ans = (ans%mod* a%mod)%mod ;
        }
        cout<<ans<<endl;
    }
    
    return 0 ;
}