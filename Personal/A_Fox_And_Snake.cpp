#include<bits/stdc++.h>

using namespace std ;

int main()
{
    int n,m; 
    cin>>n>>m;
    string a,b,c;
    for(int i=0; i<m; i++)
    {
        a+='#';
    }
    for(int i=0; i<m-1; i++)
    {
       b+='.';
    }
    b+='#';
    c+='#';
    for(int i=0; i<m-1; i++)
    {
        c+=".";
    }
    for(int i=1; i<=n; i++)
    {
        if(i&1) cout<<a<<endl;
        else 
        {
            if((i/2)&1) cout<<b<<endl;
            else cout<<c<<endl;
        }
    }
    
    return 0 ;
}