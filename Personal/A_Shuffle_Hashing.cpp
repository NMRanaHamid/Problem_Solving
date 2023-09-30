#include<bits/stdc++.h>

using namespace std ;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string p,h;
        cin>>p>>h;
        sort(p.begin(),p.end());
        int n = p.size();
        bool f=0;
        for(int i=0; i<h.size(); i++)
        {
            string s = h.substr(i,n);
            sort(s.begin(),s.end());
            if(s==p)
            {
                f=1; break;
            }
        }
        if(f) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    return 0 ;
}