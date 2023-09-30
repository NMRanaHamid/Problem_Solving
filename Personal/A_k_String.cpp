#include<bits/stdc++.h>

using namespace std ;

int main()
{
    int k;
    string s;
    cin>>k>>s;
    map<char,int> mp;
    set<char> st ;
    for(int i=0; i<s.size(); i++) 
    {
        st.insert(s[i]);
        mp[s[i]]++;
    }
    bool f=0;
    string str; 
    for(auto a : mp)
    {
        if(a.second%k!=0)
        {
            f=1;
            break;
        }
        for(int i=0; i<a.second/k; i++)
        {
            str+=a.first;
        }
    }
    if(f) cout<<-1<<endl;
    else 
    {
       for(int i=0; i<k; i++)
       {
         cout<<str;
       }
       cout<<endl;
    }
    
    return 0 ;
}