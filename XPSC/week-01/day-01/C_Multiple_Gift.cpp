#include<bits/stdc++.h>
#define ll long long
using namespace std ;

int main()
{
    ll a,b;
    cin>>a>>b;
    ll m=2;
    vector<ll> v;
    v.push_back(a);
    for(ll i=a,k; i<=b; i=k)
    {
        k = i * m;
        if(k<=b)v.push_back(k);
    }
    // for(auto x: v) cout<<x<<" ";
    // cout<<endl;
    cout<<v.size()<<endl;
    
    return 0 ;
}