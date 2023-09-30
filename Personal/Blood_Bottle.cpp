#include<bits/stdc++.h>

using namespace std ;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n = s.size(), cnt=0;
        vector<int> ans;
        for(int i=0; i<n;i++)
        {
            if(s[i]=='1') cnt++;
            else 
            {
                ans.push_back(cnt);
                cnt=0;
            }
        }
        if(cnt) ans.push_back(cnt);
        sort(ans.rbegin(),ans.rend());
        int sum = 0;
        for(int i=0; i<ans.size(); i+=2) sum+=ans[i];
        cout<<sum<<endl;
    }
    
    return 0 ;
}