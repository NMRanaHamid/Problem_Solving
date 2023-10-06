#include<bits/stdc++.h>
#define ll long long 
#define pii pair<int,int> 

using namespace std ;
const int N = 1e5+5;
const int NN = 1e3+5;
int inf = INT_MAX;
ll Inf = 1e18;
int n,m,e;

bool find(ll n, ll  m)
{
    if(n==m) return 1;
    if(n%3!=0) return 0;
    return find(n/3LL,m) or find(2*(n/3LL),m) ;
}

int main()
{
    // int t;
    // cin>>t;
    // while(t--)
    // {
    //     ll n,m;
    //     cin>>n>>m;
    //     if(find(n,m)) cout<<"YES"<<endl;
    //     else cout<<"NO"<<endl;
    // }

    string s;
    getline(cin,s);
    stringstream ss(s);
    string word ,ans;
    while(ss>>word)
    {
        reverse(word.begin(),word.end());
        ans+=word;
        ans+=" ";
    }
    ans.pop_back();
    cout<<ans;
    
  
  return 0;
}
