#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
        #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
       #endif
	int t; cin>>t;
	while(t--)
	{
	    int n; cin>>n;
	    vector<int> ar(n), v;
	    for(int i=0; i<n; i++) cin>>ar[i];
	    for(int i=0; i<n; i++)
        {
            if(ar[i]==0) cout<<1<<" ";
            else cout<<0<<" ";
        }
	    cout<<endl;
	}
	return 0;
}
