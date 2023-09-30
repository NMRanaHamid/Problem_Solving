#include<bits/stdc++.h>
#define ll long long 
#define pii pair<int,int> 

using namespace std ;
const int N = 1e5+5;
const int NN = 1e3+5;
int inf = INT_MAX;
ll Inf = 1e18;
vector<int> adj[N];
bool visited[N];
int dist[N];
int par[N];
int mod = 1e9+7;

int subset_sum(int ar[], int n, int s) {
    if (n == 0) {
        if (s == 0)
            return 1;
        else
            return 0;
    }
    for(int i=0; i<=n;i++)
    {
        for(int j=0;j<=s;j++)
        {
            dp[i][j]=0;
        }
    }
    dp[0][0] = 1;
    for (int i = 1; i <= n; i++) 
    {
        for (int j = 0; j <= s; j++) 
        {
            if (ar[i - 1] <= j) {
                dp[i][j] = (dp[i-1][j] + dp[i - 1][j - ar[i - 1]]) % mod;
            }
            else 
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    return dp[n][s];
}

int main()
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n, s;
        cin>>n>>s;
        int ar[n];
        int sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> ar[i];
            sum += ar[i];
        }
        if(s>sum or (s+sum)%2==1)
        {
            cout<<0<<endl;
        }
        else 
        {
            s = (s+sum)/2;
            cout << subset_sum(ar, n, s) << endl;
        }
    }

    return 0;
}