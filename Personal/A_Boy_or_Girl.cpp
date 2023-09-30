#include<bits/stdc++.h>

using namespace std ;

int main()
{
    string s;
    cin>>s;
    set<char> st ;
    for(char a : s) st.insert(a);
    cout<<((st.size()&1)?"IGNORE HIM!":"CHAT WITH HER!")<<endl;
    
    return 0 ;
}