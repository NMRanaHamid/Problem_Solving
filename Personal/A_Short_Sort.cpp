#include<bits/stdc++.h>

using namespace std ;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        string  s;
        cin>>s;
        if(s=="abc" or s=="acb" or s=="cba" or s=="bac") cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    return 0 ;
}