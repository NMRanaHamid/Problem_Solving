#include<bits/stdc++.h>

using namespace std ;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n==2)
        {
            cout<<2<<endl;
            cout<<1<<" "<<2<<endl;
            continue;
        }
        vector<int> v;
        for(int i=1; i<n-2; i++) v.push_back(i);
        v.push_back(n-1);
        v.push_back(n-2);
        v.push_back(n);
        cout<<2<<endl;
        for(int i=0; i<n-1; i++)
        {
            int a = v.back(); v.pop_back();
            int b = v.back(); v.pop_back();
            cout<<a<<" "<<b<<endl;
            int c = (a+b)/2; if((a+b)%2==1) c++;
            v.push_back(c);
        }
    }
    
    
    return 0 ;
}