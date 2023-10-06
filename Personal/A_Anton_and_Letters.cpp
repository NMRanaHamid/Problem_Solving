#include<bits/stdc++.h>
#define fori(i,s,n) for(i=s; i<n;i++)
using namespace std ;

int main()
{
    string s;
    getline(cin,s);
    int ans = 0,i;
    map<char,int> mp;
    int n = s.size();
    fori(i,0,n)
    {
        if(s[i]>='a' and s[i]<='z')
        {
            mp[s[i]]++;
        }
    }
    // for(auto a : mp) ans+=a.second ;
    cout<<mp.size()<<endl;
    
    return 0 ;
}