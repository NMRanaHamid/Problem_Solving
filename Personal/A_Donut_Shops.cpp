#include<bits/stdc++.h>
#define ll long long

using namespace std ;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        ll x=-1,y=-1;
        if(a<c) x=1;
        if(a*b > c) y =b;
        cout<<x<<" "<<y<<endl;
    }
    
    return 0 ;
}