#include<bits/stdc++.h>

using namespace std ;

int main()
{
    int n;cin>>n;
    int a=0,b=0,c=0;
    while(n--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        a+=x,b+=y,c+=z;
    }
    // cout<<a<<" "<<b<<" "<<c<<endl;
    cout<<((a==b and b==c and a==0)?"YES":"NO")<<endl;
    
    
    return 0 ;
}