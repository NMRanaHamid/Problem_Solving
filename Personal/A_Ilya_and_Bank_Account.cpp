#include<bits/stdc++.h>
#define ll long long 
using namespace std ;

int main()
{
    string s; 
    cin>>s;
    int n = s.size();
    if(s[0]=='-')
    {
        if(s[n-1]>s[n-2]) s.pop_back();
        else s.erase(n-2,1);
        if(s.size()==2 and s.back()=='0') s.erase(0,1);
        cout<<s<<endl;
    }
    else cout<<s<<endl;
    
    
    return 0 ;
}