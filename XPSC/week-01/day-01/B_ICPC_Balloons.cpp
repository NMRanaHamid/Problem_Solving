#include<bits/stdc++.h>

using namespace std ;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,ans=0;
        cin>>n;
        string s;
        cin>>s;
        set<char> st ;
        for(int i=0; i<n; i++)
        {
            auto p = st.find(s[i]);
            if(p!=st.end()) ans++;
            else 
            {
                ans+=2;
                st.insert(s[i]);
            }
        }
        cout<<ans<<endl;
    }
    
    return 0 ;
}