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

class Node
{
public :
    int val;
    Node* next;
    
    Node (int val)
    {
        this-> val = val;
        this ->next = NULL ;
    }
};

void insert(Node *& head, Node *& tail, int n)
{
    Node * nd = new Node(n);
    if(head == NULL)
    {
        head = nd ;
        tail = nd ;
        return ;
    }
    tail->next = nd;
    tail = nd ;
}

bool same(Node * head, Node * headd)
{
    Node * tmp = head;
    Node * tmpp = headd ;
    while(tmp!=NULL and tmpp!=NULL)
    {
        if(tmp->val!=tmpp->val) return 0;
        tmp = tmp->next ;
        tmpp = tmpp->next ;
    }
    if(tmp==NULL and tmpp==NULL) return 1;
    return 0;
}

void solve()
{
    Node * head = NULL ;
    Node * tail = NULL ;
    int n; 
    while(true)
    {
        cin>>n;
        if(n==-1) break ;
        insert(head, tail, n);
    }    
    Node * headd = NULL ;
    Node * taill = NULL ;
    while(true)
    {
        cin>>n;
        if(n==-1) break ;
        insert(headd, taill, n);
    }    
    cout<<(same(head, headd)?"YES":"NO")<<nl;
}


int32_t main()
{

       #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
       #endif
       fast_cin();

       int t=1;
    //    cin >> t;
       for(int it=1;it<=t;it++)
       {

        //   cout << "Case #" << it << ": ";
          solve(); 

       }

   return 0;
}