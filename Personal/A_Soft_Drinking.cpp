#include<bits/stdc++.h>

using namespace std ;

int main()
{
    int n,k,l,c,d,p,nl,np ;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int snl = (k*l)/nl;
    int slm = c* d;
    int ssl = p/np ;
    cout<<min(min(snl,slm),ssl)/n<<endl;
    
    return 0 ;
}