#include<bits/stdc++.h>

using namespace std;

int main()
{
    
    int t; cin>>t;
    while(t--)
    {
        int n; 
        cin>>n;
        int ar[n];
        map<int, int> mp ;
        for(int i=0; i<n; i++) 
        {
            cin>>ar[i];
            mp[ar[i]]++ ;
        }
        for(auto a : mp)
        {
            if(a.second%2==1) 
            {
                cout<<a.first<<endl;
            }
        }

    }

    return 0 ;
}