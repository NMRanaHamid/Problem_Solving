#include<bits/stdc++.h>

using namespace std ;

class Node
{
    public :
    int val ;
    Node* left ;
    Node* right ;
    Node(int val)
    {
        this->val = val ;
        this->left = NULL ;
        this->right = NULL ;
    }

};

Node* buildtree(){
  int d;
  cin>>d;
  Node*root;
  if(d==-1){
    return NULL;
  }
  root=new Node(d);
  root->left=buildtree();
  root->right=buildtree();
  return root;
}

void print(Node*root){
  if(root==NULL){
    return;
  }
  cout<<root->val<<" ";
  print(root->left);
  print(root->right);
}

vector<int> level_order(Node *root , int s)
{
    vector<int> v;
    queue<Node *> que;
    int cl =0, nl=1, nnl=0;
    if (root)
        que.push(root);
    while (!que.empty())
    {
        Node *node = que.front();
        que.pop();
        if(s==cl)
        {
            v.push_back(node->val);
        }
        if (node->right)
        {
            que.push(node->right);
            nnl++;
        }
        if (node->left)
        {
            que.push(node->left);
            nnl++;
        }
        nl--;
        if(!nl)
        {
            cl++;
            nl = nnl;
            nnl = 0;
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
    Node* root=buildtree();  
    print(root);
    cout<<endl;
    int n = Height(root);
    int a; cin>>a;
    if(a>=n  || a<0) 
    {
        cout<<"Invalid"<<endl;
        return 0 ;
    }
    vector<int> ans = level_order(root, a);
    for(auto val : ans) cout<<val<<" ";

    return 0;
}
