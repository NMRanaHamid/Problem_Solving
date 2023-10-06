#include<bits/stdc++.h>
#define all(x) (x).begin(),(x).end()
using namespace std ;

int main()
{
    string s;
    cin>>s;
    int n = s.size();
    vector<int> v;
    for(int i=0; i<n;i++)
    {
        if(s[i]>='1' and s[i]<='9')
        {
            int a = s[i]-'0';
            v.push_back(a);
        }
    }
    sort(all(v));
    for(int i=0; i<v.size(); i++)
    {
        if(i==v.size()-1) cout<<v[i];
        else cout<<v[i]<<"+";
    }
    
    return 0 ;
}