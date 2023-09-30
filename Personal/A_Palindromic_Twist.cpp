#include<bits/stdc++.h>

using namespace std ;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        string ss = s;
        reverse(ss.begin(),ss.end());
        if(s==ss) cout<<"YES"<<endl;
        else 
        {
            bool f=0;
            for(int i=0; i<n; i++)
            {
                int x = abs((int)s[i]-(int)s[n-1-i]);
                // cout<<s[i]<<" "<<s[n-i]<<" ";
                // cout<<(int)s[i]<<" "<<(int)s[n-i]<<" ";
                // cout<<x<<" ";
                if(x!=2 and x!=0)
                {
                    f=1;
                    break;
                }
            }
            if(f) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }
    
    return 0 ;
}