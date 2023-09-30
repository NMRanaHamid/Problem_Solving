#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
bool vis[N];
vector<int> v[N];
int ans = 0 ;
int dfs(int s, int p)
{
    vis[s] = true;

    for (int i = 0; i < v[s].size(); i++)
    {
        int c = v[s][i];
        if (!vis[c])
        {
            dfs(c, s);
        }
        else if (c != p)
        {
            ans++;
        }
    }
    return ans ;
}

int main()
{
    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    cout << dfs(1,-1) / 2 << endl;

    return 0;
}
