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
        int a=0;
       string ss = "codeforces";
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]!=ss[i])a++;
        }
        cout<<a<<endl;
    }
    
    
    return 0 ;
}