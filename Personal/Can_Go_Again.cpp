#include <bits/stdc++.h>
#define pi pair<ll, ll>
#define ll long long
using namespace std;
const ll N = 1e5 + 5;
vector<pi> v[N];
bool vis[N];
class Edge
{
public:
    ll u, v, w;
    Edge(ll u, ll v, ll w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};
class cmp
{
public:
    bool operator()(Edge a, Edge b)
    {
        return a.w > b.w;
    }
};

bool bellmanFord(ll s, ll n, vector<ll>& dis) {
    dis[s] = 0;

    for (ll i = 1; i < n; i++) {
        for (ll j = 1; j <= n; j++) {
            for (pi c : v[j]) {
                ll d = c.first;
                ll w = c.second;
                if (dis[j] != INT_MAX && dis[j] + w < dis[d]) {
                    dis[d] = dis[j] + w;
                }
            }
        }
    }

    for (ll i = 1; i <= n; i++) {
        for (pi c : v[i]) {
            ll d = c.first;
            ll w = c.second;
            if (dis[i] != INT_MAX && dis[i] + w < dis[d]) 
                return false; 
        }
    }
    return true;
}

int main()
{
    ll n, e;
    cin >> n >> e;
    while (e--)
    {
        ll a, b, w;
        cin >> a >> b >> w;
        v[a].push_back({b, w});
    }

    ll s;
    cin >> s;

    vector<ll> dis(n + 1, INT_MAX);
    
    if (bellmanFord(s, n, dis)) {
        ll t;
        cin >> t;
        while (t--)
        {
            ll d;
            cin >> d;
            
            if (dis[d] == INT_MAX)
            {
                cout << "Not Possible" << endl;
            }
            else
            {
                cout << dis[d] << endl;
            }
        }
    }
    else {
        cout << "Negative Cycle Detected" << endl;
    }

    return 0;
}
