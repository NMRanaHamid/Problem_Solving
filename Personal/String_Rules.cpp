#include<bits/stdc++.h>

using namespace std;

int main()
{
    
    string s; cin>>s;
    string ans ="",anss="";
    // map<int, string> mp;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]>='1' && s[i]<='9')
        {
            int j=i+1,c=0;
            while(s[j]>='a' && s[j]<='z')
            {
                c++;
                j++;
            }
            ans = s.substr(i+1,c);
            // cout<<c<<" "<<ans<<endl;
            int a = s[i]-'0';
            for(int k=0; k<a; k++) 
            {
                cout<<ans;
            }
        }
        else if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/') cout<<s[i];
    }
    // cout<<ans<<endl;

    return 0 ;
}