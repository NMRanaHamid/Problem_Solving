#include<bits/stdc++.h>

using namespace std ;

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>a(n),b;
    map<int,vector<int>> mp;
    for(int i=0; i<n; i++) 
    {
        cin>>a[i];
        mp[a[i]].push_back(i+1);
    }
    b=a;
    sort(b.begin(),b.end());
    vector<int> v;
    for(int i=0; i<n; i++)
    {
        if(k-b[i]>=0)
        {
            v.push_back(mp[b[i]].back());
            mp[b[i]].pop_back();
            k-=b[i];
        }
        else break;
    }
    if(v.size()==0) cout<<v.size()<<endl;
    else 
    {
        cout<<v.size()<<endl;
        for(auto a : v) cout<<a<<" ";
        cout<<endl;
    }
    
    return 0 ;
}