#include<bits/stdc++.h>
#define ll long long 
using namespace std ;

int main()
{
    int t ; 
    cin>>t ; 
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        vector<ll> ans;
        for(int i=0; i<n; i++) 
        {
            if(i%2) 
            {
                ans.push_back(2) ; 
                k-=2 ; 
            }
            else 
            {
                ans.push_back(1) ; 
                k-=1 ; 
            }
        }
        if(k<0)
        {
            cout<<"-1"<<endl ; 
        }
        else 
        {
            if(k==1) cout<<"-1"<<endl ; 
            else 
            {
                bool ff=0;
                int i=0;
                ll x = k/(2*n);
                k%=(n*2);
                while(k>0)
                {
                    if(k==1)
                    {
                        ff=1;
                        break;
                    }
                    ans[i]+=2 ;
                    k-=2 ;
                    i%=n ;
                    i++ ;
                }
                if(k&1 or ff) cout<<"-1"<<endl ;
                else 
                {
                    bool f= 1 ;
                    for(int i=0;i<n;i++)
                    {   ans[i]+=(2*x);
                        if(ans[i]>100000)
                        {
                            f=0 ;
                            break ;
                        }
                    }
                    if(f)
                    {
                        for(auto v : ans) cout<<v<<" " ;
                        cout<<endl ;
                    }
                    else cout<<-1<<endl ; 
                }
            }
        }
    }

    
    return 0 ;
}