#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--)
	{
	    int n; cin>>n;
	    //vector<int> ans;
	    if(n&1)
	    {
	        cout<<-1<<endl;
	        continue ;
	    }
	    for(int i=n; i>=1; i--) cout<<i<<" ";
	    cout<<endl;
	}
	return 0;
}
