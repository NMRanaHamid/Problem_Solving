#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1) root = NULL;
    else root = new Node(val);
    queue<Node *> que;
    if (root)  que.push(root);
    while (!que.empty())
    {
        Node *p = que.front();
        que.pop();
        int l, r;
        cin >> l >> r;
        Node *myLeft;
        Node *myRight;
        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);
        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        if (p->left)
            que.push(p->left);
        if (p->right)
            que.push(p->right);
    }
    return root;
}

void level_order_max(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<Node *> que;
    que.push(root);
    int  mx=INT_MIN;
    while (!que.empty())
    {
        Node *s = que.front();
        que.pop();
        if(s->left==NULL && s->right==NULL)
        {
            mx = max(mx, s->val);
        }
        if (s->left)
            que.push(s->left);
        if (s->right)
            que.push(s->right);
    }
    cout<<mx<<endl;
}

int main()
{
    Node *root = input_tree();
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        if(n==1)
        {
            root = input_tree();
        }
        else 
        {

        }
    }
    return 0;
}