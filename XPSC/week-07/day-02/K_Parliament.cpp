#include <iostream>
using namespace std;

int main() 
{
	int t; cin>>t;
	while(t--)
	{
	    int n,m; cin>>n>>m;
	    if(n & 1) n++;
	    if(m>=n/2) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}
	return 0;
}
