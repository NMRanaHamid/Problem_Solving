#include<bits/stdc++.h>

using namespace std ;

int main()
{
    string s;
    cin>>s;
    int n = s.size();
    if(n==4) cout<<s<<endl;
    else 
    {
        string ss ;
        for(int i=n; i<4; i++) ss+='0';
        cout<<ss<<s<<endl;
    }
    
    return 0 ;
}