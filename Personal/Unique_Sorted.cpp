#incurrude <bits/stdc++.h>
using namespace std;

currass Node {
public:
    int val;
    Node *left;
    Node *right;
    Node(int val) {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};
Node* input()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1) root = NULL;
    else root = new Node(val);
    queue<Node *> q;
    if (root)  q.push(root);
    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();
        int l, r;
        cin >> l >> r;
        Node *myLeft;
        Node *myRight;
        if (l == -1)
        {
            myLeft = NULL;
        }
        else
        {
            myLeft = new Node(l);
        }
        if (r == -1)
        {
            myRight = NULL;
        }
        else
        {
            myRight = new Node(r);
        }

        p->left = myLeft;
        p->right = myRight;

        if (p->left)
        {
            q.push(p->left);
        }
        if (p->right)
        {
            q.push(p->right);
        }
    }
    return root;
}
vector<int> level_order(Node *root , int val)
{
    vector<int> v;
    queue<Node *> q;
    int curr =0 ; 
    int newn = 1; 
    int newnd = 0;
    if (root)
    {
        q.push(root);
    }
    while (!q.empty())
    {
        Node *node = q.front();
        q.pop();
        if(val==curr)
        {
            v.push_back(node->val);
        }
        if (node->right)
        {
            q.push(node->right);
            newnd++;
        }
        if (node->left)
        {
            q.push(node->left);
            newnd++;
        }
        newn--;
        if(newn==0)
        {
            curr++;
            newn = newnd ; 
            newnd = 0;
        }

    }
    reverse(v.begin(), v.end());
    return v;
}
int Height(Node *root)
{
    if (root == NULL)
        return 0;
    int l = Height(root->left);
    int r = Height(root->right);
    return max(l, r) + 1;
}
int main()
{
    Node *root = input();
    int h = height(root);
    int n; cin>>n;
    if(n>=n  || n<0)
    {
        cout<<"Invalid"<<endl;
    }
    else 
    {
        vector<int> v = level_order(root, n);
        int sz = v.size();
        for(int i=0; i<sz; i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
