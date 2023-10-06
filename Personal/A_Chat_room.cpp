#include<bits/stdc++.h>

using namespace std ;

int main()
{
    string s,t="hello";
    cin>>s;
    int x = 0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]==t[x]) x++;
    }
    if(x>4) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
    
    
    return 0 ;
}