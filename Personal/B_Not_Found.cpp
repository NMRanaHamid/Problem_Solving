#include<bits/stdc++.h>

using namespace std ;

int main()
{
    string s;
    cin>>s ;
    map<char,int> mp;
    for(char c='a'; c<='z'; c++) mp[c]=0;
    for(int i=0; i<s.size(); i++) mp[s[i]]++;
    char ans = 'A';
    for(char c='a'; c<='z'; c++) 
    {
        if(mp[c]==0)
        {
            ans=c;
            break;
        }
    }
    if(ans=='A') cout<<"None"<<endl;
    else cout<<ans<<endl;
    
    
    return 0 ;
}