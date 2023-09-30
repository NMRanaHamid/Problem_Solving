#include<bits/stdc++.h>
#define ll long long 
#define pii pair<int,int> 

using namespace std ;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int> ar(n);
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        vector<int> b = ar;
        sort(ar.rbegin(),ar.rend());
        int mx1=ar[0], mx2=ar[1];
        for(int i=0; i<n;i++)
        {
            if(b[i]==mx1 || b[i]==mx2) 
            {
                cout<<i<<" ";
            }
        }
        cout<<endl;
    }
    
  
  return 0;
}