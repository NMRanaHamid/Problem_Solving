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
        int d = floor(log10(n))+1;
        int i=1;
        vector<int> ans ;
        while(d--)
        {
            int x = n%(10*i) ;
            ans.push_back(x);
            n-=x; i*=10;
        }
        d=0;
        for(auto a : ans) if(a!=0) d++;
        cout<<d<<endl;
        for(auto a : ans ) if(a!=0)cout<<a<<" ";
        cout<<endl;
        
    }
    
    return 0 ;
}