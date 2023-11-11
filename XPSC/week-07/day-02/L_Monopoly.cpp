#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--)
	{
	    int a,d,n,m;
	    cin>>a>>d>>n>>m;
	    if((a>(d+n+m)) or (d>(a+n+m)) or (n>(a+m+d)) or (m>(a+d+n))) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}
	return 0;
}
