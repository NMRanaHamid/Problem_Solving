#include <bits/stdc++.h>
using namespace std;
template <typename T>

class Node {
public:
    T val;
    Node<T> *left;
    Node<T> *right;
    Node(T val) {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};
Node<int> *input_tree()
{
    int val;
    cin >> val;
    Node<int> *root;
    if (val == -1) root = NULL;
    else root = new Node<int>(val);
    queue<Node<int> *> que;
    if (root)  que.push(root);
    while (!que.empty())
    {
        Node<int> *p = que.front();
        que.pop();
        int l, r;
        cin >> l >> r;
        Node<int> *myLeft;
        Node<int> *myRight;
        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node<int>(l);
        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node<int>(r);

        p->left = myLeft;
        p->right = myRight;

        if (p->left)
            que.push(p->left);
        if (p->right)
            que.push(p->right);
    }
    return root;
}
int countN(Node<int> *root)
{
    if (root == NULL)
        return 0;
    int l = countN(root->left);
    int r = countN(root->right);
    return l + r + 1;
}
int Height(Node<int> *root)
{
    if (root == NULL)
        return 0;
    int l = Height(root->left);
    int r = Height(root->right);
    return max(l, r) + 1;
}
int main()
{
    Node<int> *root = input_tree();
    int h = Height(root);
    int n = countN(root);
    if(n==(pow(2,h)-1)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}