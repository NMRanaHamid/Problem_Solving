#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--)
	{
	    int n; cin>>n;
	    string s; cin>>s;
	    char c = 'A';
	    int ans = 0, vov = 0;
	    for(int i=0; i<n; i++)
	    {
	        if(s[i]==c)
	        {
	            if(c=='A') ans++;
	            else vov++;
	        }
	        else 
	        {
	            c=s[i];
	        }
	    }
	    cout<<ans<<" "<<vov<<endl;
	}
	return 0;
}
