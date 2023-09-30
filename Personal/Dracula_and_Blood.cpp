#include<bits/stdc++.h>

using namespace std;

int main()
{
    
    int t; cin>>t;
    while(t--)
    {
        string s; cin>>s;
        int z =0, k=0;
        int c = 0;
        vector<int> v;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='1') c++;
            else 
            {
                if(c)v.push_back(c);
                c=0;
            }
        }
        if(c>0) v.push_back(c);
        sort(v.begin(), v.end());
        reverse(v.begin(), v.end());
        for(int i=0; i<v.size(); i++)
        {
            if(i%2==0) z+=v[i];
        }
        cout<<z<<endl;
    }

    return 0 ;
}