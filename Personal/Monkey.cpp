#include<bits/stdc++.h>

using namespace std;

int main()
{
    
    string s; 
    while(getline(cin,s))
    {
        stringstream ss(s);
        string st ;
        string ans = "";
        while(ss >> st)
        {
            ans+=st;
        }
        sort(ans.begin(), ans.end());
        cout<<ans<<endl;
    }

    return 0 ;
}