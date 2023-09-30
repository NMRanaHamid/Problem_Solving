#include<bits/stdc++.h>

using namespace std ;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    bool flag = 0;
    while(c%a!=0 and c>=b) c-=b;
    if(c==0 or c%a==0) flag =1;
    cout<<(flag?"Yes":"No")<<endl;
    return 0 ;
}