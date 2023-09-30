#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; 
    while(cin>>n)
    {
        int ar[n];
        for(int i=0; i<n; i++) cin>>ar[i];
        long long ans = 0, sum=0;
        for(int i=0; i<n; i++) 
        {
            sum+=ar[i];
            ans+=abs(sum);
        }
       if(ans) cout<<ans<<endl;
    }
}