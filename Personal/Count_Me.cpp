#include<bits/stdc++.h>

using namespace std ;

int main()
{
    int t; cin>>t;
    t++ ;
    while(t--)
    {
        string s; 
        getline(cin, s);
        stringstream ss(s);
        int mx = 0 ;
        map<string, int> mp ;
        string name, ans="phi" ;
        while(ss >> name)
        {
            mp[name]++;
            if(mp[name] > mx)
            {
                mx = mp[name];
                ans = name ;
            }
        }
        if(ans!="phi")
            cout<<ans<<" "<<mx<<endl;
    }
}