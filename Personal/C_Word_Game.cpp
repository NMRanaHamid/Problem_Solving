#include<bits/stdc++.h>

using namespace std ;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c1=0,c2=0,c3=0;
        cin>>n;
        map<string,int> p1,p2,p3;
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<n; j++)
            {
                string s; cin>>s;
                if(i==0) p1[s]++;
                else if(i==1) p2[s]++;
                else if(i==2) p3[s]++;
            }
        }

        for(auto s : p1 )
        {
            if(p2[s.first]==0 and p3[s.first]==0) c1+=3;
            else if(p2[s.first]!=0 and p3[s.first]==0) c1+=1;
            else if(p2[s.first]==0 and p3[s.first]!=0) c1+=1;
        }
        for(auto s : p2 )
        {
            if(s.second!=0)
            {
                if(p1[s.first]==0 and p3[s.first]==0) c2+=3;
                else if(p1[s.first]!=0 and p3[s.first]==0) c2+=1;
                else if(p1[s.first]==0 and p3[s.first]!=0) c2+=1;
            }
        }
        for(auto s : p3 )
        {
            if(s.second!=0)
            {
                if(p2[s.first]==0 and p1[s.first]==0) c3+=3;
                else if(p2[s.first]!=0 and p1[s.first]==0) c3+=1;
                else if(p2[s.first]==0 and p1[s.first]!=0) c3+=1;
            }
        }
        cout<<c1<<" "<<c2<<" "<<c3<<endl;
    }
    
    return 0 ;
}