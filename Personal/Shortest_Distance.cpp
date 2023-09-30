#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll INF = 1e15;

int main()
{
    ll n, e;
    cin >> n >> e;
    ll dis[n+1][n+1];
    for(ll i=1; i<=n; i++)
    {
        for(ll j=1; j<=n; j++)
        {
            dis[i][j] = INF ;
            if(i==j)
                dis[i][j] = 0;
        }
    }
    
    while (e--)
    {
        ll a, b, w;
        cin >> a >> b >> w;
        dis[a][b] = min(dis[a][b], w); 
    }
    
    for (ll k = 1; k <= n; k++)
    {
        for (ll i = 1; i <= n; i++)
        {
            for (ll j = 1; j <= n; j++)
            {
                if (dis[i][k] != INF && dis[k][j] != INF)
                {
                    dis[i][j] = min(dis[i][j], dis[i][k] + dis[k][j]);
                }
            }
        }
    }
    
    int q;
    cin >> q;
    while (q--)
    {
        ll s, d;
        cin >> s >> d;
        
        if (dis[s][d] == INF)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << dis[s][d] << endl;
        }
    }
    
    return 0;
}
