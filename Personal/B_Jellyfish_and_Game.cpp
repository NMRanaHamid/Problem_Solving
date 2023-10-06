#include<bits/stdc++.h>
#define ll long long 
#define pii pair<int,int> 

using namespace std ;
const int N = 1e5+5;
const int NN = 1e3+5;
int inf = INT_MAX;
ll Inf = 1e18;
int n,m,e;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,m,k;
        cin>>n>>m>>k;
        ll j[n],g[m];
        ll sj=0, sg=0;
        vector<ll> jq,gq;
        for(int i=0; i<n; i++) {
            ll a;
            cin>>a;
            jq.push_back(a);
            sj+=a;
        }
        for(int i=0; i<m; i++) 
        {
            ll a;
            cin>>a;
            gq.push_back(a);
            sg+=a;
        }
        sort(jq.begin(),jq.end());
        sort(gq.begin(),gq.end());
        ll x =k%2;
        x+=2LL;
        ll mxj = jq.back(), mnj = jq.front();
        ll mxg = gq.back(), mng = gq.front();
        sj-=(mxj+mnj); 
        sg-=(mng+mxg);
        // cout<<x<<" "<<mnj<<" "<<mxj<<" "<<mng<<" "<<mxg<<endl;
        for(ll i=1; i<=x; i++)
        {
            if(i&1)
            {
                if(mnj<mxg)
                {
                    swap(mnj,mxg);
                    if(mnj>mxj) swap(mnj,mxj);
                    if(mng>mxg) swap(mng,mxg);
                }
            }
            else 
            {
                if(mng<mxj)
                {
                    swap(mng,mxj);
                    if(mng>mxg) swap(mng,mxg);
                    if(mnj>mxj) swap(mnj,mxj);
                }
            }
        }
        // cout<<mnj<<" "<<mxj<<endl;
        cout<<sj+mnj+mxj<<endl;

    }
    
  
  return 0;
}