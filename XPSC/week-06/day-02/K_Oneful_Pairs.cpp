#include<bits/stdc++.h>
#define nl "\n"
using namespace std ;

int main()
{
    int a,b; cin>>a>>b;
    int ans = a+b+(a*b);
    cout<<((ans==111)?"Yes":"No")<<nl;
    
    return 0 ;
}