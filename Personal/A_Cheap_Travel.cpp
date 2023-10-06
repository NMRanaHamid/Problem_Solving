#include<bits/stdc++.h>

using namespace std ;

int main()
{
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    if(m*a<=b) cout<<n*a<<endl;
    else 
    {
        int x = n/m;
        int y = n%m;
        cout<<min(y*a,b)+(x*b)<<endl;
    }
    
    return 0 ;
}