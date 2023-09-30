#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
ll mod = 1e9+7;
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())


void solve()
{
     int n,k,x;
     cin>>n>>k>>x;
     if (k == 1)
            cout << "NO" << endl;
        else
        {
            if (x != 1)
            {
                cout << "YES" << endl;
                cout << n << endl;
                for (ll j = 1; j <= n; j++)
                {
                    cout << "1";
                    if (j != n)
                        cout << " ";
                    else
                        cout << endl;
                }
            }
            else
            {
                if (n % 2 == 0)
                {
                    cout << "YES" << endl;
                    cout << n / 2 << endl;
                    for (ll j = 1; j <= n / 2; j++)
                    {
                        cout << "2";
                        if (j != n / 2)
                            cout << " ";
                        else
                            cout << endl;
                    }
                }
                else
                {
                    if (k == 2)
                        cout << "NO" << endl;
                    else
                    {
                        cout << "YES" << endl;
                        cout << ((n - 3) / 2) + 1 << endl;
                        cout << "3";
                        for (ll j = 1; j <= (n - 3) / 2; j++)
                            cout << " 2";
                        cout << endl;
                    }
                }
            }
        }
}


int32_t main()
{

       #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
       #endif
       fast_cin();

       int t=1;
       cin >> t;
       for(int it=1;it<=t;it++)
       {

        // cout << "Case #" << it << ": ";
          solve(); 

       }

   return 0;
}